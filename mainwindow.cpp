#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnAsteroid_clicked()
{
    // Change background color for render area
    this->ui->renderArea->setShape(RenderArea::Asteroid);
    this->ui->renderArea->setBackgroundColor(Qt::red);
    this->ui->renderArea->repaint();

}

void MainWindow::on_btnCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Cycloid);
    this->ui->renderArea->setBackgroundColor(Qt::green);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHuygens_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HuygensCycloid);
    this->ui->renderArea->setBackgroundColor(Qt::blue);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHypo_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HypoCycloid);
    this->ui->renderArea->setBackgroundColor(Qt::yellow);
    this->ui->renderArea->repaint();
}

