#include "CutBoardWindow.h"
#include "ui_CutBoardWindow.h"

CutBoardWindow::CutBoardWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CutBoardWindow)
{
    ui->setupUi(this);
}

CutBoardWindow::~CutBoardWindow()
{
    delete ui;
}
