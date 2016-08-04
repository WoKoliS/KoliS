#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <iostream>
#include "dialog.h"
#include <QSize>
#include <QPushButton>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <sstream>
#include <cmath>
#include <string>
#include <QString>
#include <QtWidgets>
#include <burning.h>
#include <QLabel>
#include <QPushButton>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

    Dialog *mDialog = new Dialog(this);
    connect(mDialog, SIGNAL(playerNamesSet(QString,QString)), this, SLOT(onPlayerNamesSet(QString,QString)));
    mDialog->show();

    srand (time(NULL));

    number_of_cards[0]=5;
    number_of_cards[1]=5;

    for(int j=0; j<2; j++)
        for(int i=0; i<10; i++)
        {
            card_slots_battlefield.resize(2);
            card_slots_battlefield[j].resize(10);
            card_slots_battlefield[j][i] = new Burning(this);
            card_slots_battlefield[j][i]->hide();
            card_slots_battlefield[j][i]->move(10+i*190,270+260*j);
            abilities_battlefield.resize(2);
            abilities_battlefield[j].resize(10);
        }


    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
        {
            player_properities[i][j] = new QLabel(this);
            player_properities[i][j]->setGeometry(20, 10+30*j+890*i, 75, 23);
            player_properities[i][j]->show();
            player_properities[i][j]->setText("");
        }

}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::onPlayerNamesSet(QString p1_name, QString p2_name)
{    
    QSignalMapper *signalMapper = new QSignalMapper(this);

    for(int j=0; j<2; j++)
        for(int i=0; i<5; i++)
        {
            int temp=rand()%60+1;
            QString random_string=QString::number(temp);
            card_slots_hand.resize(2);
            card_slots_hand[j].resize(8);
            card_slots_hand[j][i] = new Burning(this);
            card_slots_hand[j][i]->move(290+170*i, 20+750*j);
            card_slots_hand[j][i]->main_image->setIcon(QIcon("C:\\Users\\KoliS\\Desktop\\GameSourceCards\\" + random_string + ".png"));
            card_slots_hand[j][i]->main_image->setIconSize(QSize(150,220));
            card_slots_hand[j][i]->show();
            connect(card_slots_hand[j][i]->main_image, SIGNAL(clicked()), signalMapper, SLOT(map()));
            signalMapper->setMapping(card_slots_hand[j][i]->main_image, j*10+i);
            abilities_hand.resize(2);
            abilities_hand[j].resize(8);
            abilities_hand[j][i] = temp;
            card_slots_hand[j][i]->ability_number=temp;
        }

    connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(card_hand_clicked(int))) ;

    player_properities[0][0]->setText(p1_name);
    player_properities[1][0]->setText(p2_name);
    player_properities[0][1]->setText("100");
    player_properities[1][1]->setText("100");
}

void MainWindow::card_hand_clicked(int a)
{
    int i=a/10;
    int j=a-(i*10);
    number_of_cards[i]--;

    //delete card_slots_hand[i][j];
    player_properities[0][1]->setText(QString::number(j));
    card_slots_hand[i].erase(card_slots_hand[i].begin()+j-1); // -------------  I dont know whether it's needed
    //card_slots_hand[i].resize(number_of_cards[i]);
    abilities_hand[i].erase(abilities_hand[i].begin()+j-1);

    //card_slots_hand[i][j]->hide();

    //card_slots_hand[i][j]->move(290, 20+750);
    /*for(int u=0; u<number_of_cards[i]; u++)
    {
        card_slots_hand[i][u]->move(290+170*u, 20+750*i);
    }

/*
    for(int b=0; b<number_of_cards[i]; b++)
    {
        //player_properities[0][0]->setText(QString::number(abilities_hand[i][b]));
        QString ability = QString::number(abilities_hand[i][b]);
        card_slots_hand[i][b]->main_image->setIcon(QIcon("C:\\Users\\KoliS\\Desktop\\GameSourceCards\\" + ability + ".png"));
    }
    */


}

