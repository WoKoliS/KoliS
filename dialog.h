#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMainWindow>
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


namespace Ui {
class Dialog;
}


class Dialog : public QDialog
{
	Q_OBJECT

public:
	explicit Dialog(QWidget *parent = 0);
	~Dialog();


signals:
	void playerNamesSet(QString p1_name, QString p2_name);

private slots:
	void on_pushButton_clicked();

	void on_pushButton_2_clicked();

private:
	Ui::Dialog *ui;
};

#endif // DIALOG_H
