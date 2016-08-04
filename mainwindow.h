#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include "dialog.h"
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

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
    QLabel *player_properities[2][2];
    vector<vector<int> > abilities_hand;
    vector<vector<int> > abilities_battlefield;
    vector<vector<Burning*> > card_slots_hand;
    vector<vector<Burning*> > card_slots_battlefield;
    int number_of_cards[2];

signals:

public slots:
	void onPlayerNamesSet(QString p1_name, QString p2_name);
    void card_hand_clicked(int a);

private slots:

private:
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
