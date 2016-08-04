#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>
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


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();



	return a.exec();
}
