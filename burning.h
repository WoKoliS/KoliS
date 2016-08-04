#pragma once

#include <QWidget>
#include <QSlider>
#include <QFrame>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

class Burning : public QFrame {

  Q_OBJECT

  public:
    Burning(QWidget *parent = 0);
    QPushButton *main_image;
    QLabel *attack_value;
    QLabel *life_value;
    QLabel *mana_value;
    int ability_number;

  public slots:

  private slots:
    //void on_main_image_clicked();

  private:

    void initUI();
};
