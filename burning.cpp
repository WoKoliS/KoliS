#include <QtGui>
#include "burning.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>


Burning::Burning(QWidget *parent)
    : QFrame(parent) {

  initUI();
}

void Burning::initUI() {

    QFont f( "Times New Roman", 20, QFont::Bold);

    setFixedHeight(220);
    setFixedWidth(150);

    main_image = new QPushButton(this);
    main_image->setGeometry(0,0,150,220);
    main_image->setText("");

    attack_value = new QLabel(this);
    attack_value->setGeometry(10,180,40,40);
    attack_value->setFont( f);
    attack_value->setText("<font color=\"Red\">d");
    attack_value->show();

    life_value = new QLabel(this);
    life_value->setGeometry(120,180,40,40);
    life_value->setFont( f);
    life_value->setText("<font color=\"Lime\">d");
    life_value->show();

    mana_value = new QLabel(this);
    mana_value->setGeometry(10,0,40,40);
    mana_value->setFont( f);
    mana_value->setText("<font color=\"Aqua\">d");
    mana_value->show();

    /* Stylesheets
    life_value = new QLabel(this);
    life_value->move(110, 180);
    life_value->setStyleSheet("color: green ; font: bold 30px;");
    life_value->setText("5");
    */
}
