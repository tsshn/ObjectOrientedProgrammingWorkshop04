#include "Person.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString nameList[] = {"Fitzpamtrick", "Hoover", "Roman", "Dorthy", "Tameka", "Pamela", "Osborne", "Belinda", "Eunice", "Dona"};

    left = new QStringListModel(this);
    right = new QStringListModel(this);

    QStringList nameListLeft, nameListRight;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            nameListLeft.append(Person(nameList[i]).getName());
        else
            nameListRight.append(Person(nameList[i]).getName());
    }

    left->setStringList(nameListLeft);
    right->setStringList(nameListRight);

    ui->left->setModel(left);
    ui->left->setDefaultDropAction(Qt::MoveAction);

    ui->right->setModel(right);
    ui->right->setDefaultDropAction(Qt::MoveAction);
}

MainWindow::~MainWindow()
{
    delete ui;
}
