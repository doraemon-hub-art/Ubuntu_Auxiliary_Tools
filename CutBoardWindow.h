#ifndef CUTBOARDWINDOW_H
#define CUTBOARDWINDOW_H

#include <QWidget>

namespace Ui {
class CutBoardWindow;
}

class CutBoardWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CutBoardWindow(QWidget *parent = nullptr);
    ~CutBoardWindow();

private:
    Ui::CutBoardWindow *ui;
};

#endif // CUTBOARDWINDOW_H
