#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>
#include <QObject>
#include <QKeyEvent>

#include "MainWindow.h"

class Application : public QApplication
{
public:
    Application(int &argc, char **argv);
    Application(int &argc, char **argv, int flag = ApplicationFlags);

    virtual ~Application();

private:
    bool keyNumberPress(QKeyEvent *);

protected:
    bool notify(QObject *obj, QEvent *event) Q_DECL_OVERRIDE;

public:
    MainWindow m_window;


signals:
    void signal_keyPress(QKeyEvent * keyEvent);
};

#endif // APPLICATION_H
