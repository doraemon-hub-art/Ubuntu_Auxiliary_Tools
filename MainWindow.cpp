#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_cutBoardWindow = new CutBoardWindow;

    m_cutBoardHotkey = new QHotkey(QKeySequence("Ctrl+K"),true,this);


    connect(m_cutBoardHotkey,&QHotkey::activated,this,&MainWindow::onCutBoard);


//    t = new QHotkey(QKeySequence("Ctrl+K"),true,this);

//    connect(t,&QHotkey::activated,this,&MainWindow::test_hot_key);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onScreenShot()
{

}

void MainWindow::onTranslate()
{

}

void MainWindow::onCutBoard()
{
//    m_cutBoardWindow->show();
}


