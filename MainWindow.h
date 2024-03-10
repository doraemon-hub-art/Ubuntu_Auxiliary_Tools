#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QMessageBox>
#include <QHotkey>
#include "CutBoardWindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void onScreenShot();
    void onTranslate();
    void onCutBoard();


private:
    Ui::MainWindow *ui;

    QHotkey* m_screenShotHotkey;
    QHotkey* m_translateHotkey;
    QHotkey* m_cutBoardHotkey;

    CutBoardWindow* m_cutBoardWindow;

};

#endif // MAINWINDOW_H
