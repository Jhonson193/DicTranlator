#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui{
class Notepad;
}
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = nullptr);
    //构造器
    ~Notepad();
    //析构器

private slots:
    void newDocument();
    void open();
    void save();
    void saveAs();
    void print();
    void exit();
    void copy();
    void cut();
    void paste();
    void undo();
    void redo();
    void selectFont();
    void setFontBold(bool bold);
    void setFontUnderline(bool underline);
    void setFontItalic(bool italic);
    void about();
    void receiveshownotepad();
    void Chinese();
    void English();

private:
    Ui::Notepad *ui;
    QString currentFile;

};

#endif // NOTEPAD_H
