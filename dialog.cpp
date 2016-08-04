#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <iostream>
#include "mainwindow.h"
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


using namespace std;

Dialog::Dialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Dialog)
{
	ui->setupUi(this);
}

Dialog::~Dialog()
{
	delete ui;
}



void Dialog::on_pushButton_clicked()
{
	QString firstname = ui->lineEdit_2->text();
	QString secondname = ui->lineEdit->text();
    if(firstname.size()>0 && secondname.size()>0)
	{
		emit playerNamesSet(firstname, secondname);

        QMessageBox::information(this, "Game starting", "First players name: " + ui->lineEdit_2->text() + "\n" + "Second players name: " + ui->lineEdit->text()+ "\nStarting the game...");

		Dialog::accept();
	}
	else
	{
		QMessageBox::information(this, "Error", "Too short names!");
	}
}

void Dialog::on_pushButton_2_clicked()
{
	ui->lineEdit->setText("");
	ui->lineEdit_2->setText("");
}
