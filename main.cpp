#include "mainwindow.h"
#include "login.h"
#include "regis.h"
#include"note.h"
#include"cet6.h"
#include"notepad.h"
#include"tenw_words.h"
#include"gaopin.h"

#include <QApplication>
#include <QObject>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlTableModel>
#include <QLibrary>

void deletemany()
{
    QSqlQuery query;
    QString sql = "(DELETE\
            e\
            FROM\
            "+login::usernamelogin+" e\
            WHERE e.id NOT IN (\
                SELECT IFNULL(MIN(id),e.id)\
                FROM (\
                    SELECT min(id) id,d.last_name\
                    FROM "+login::usernamelogin+" d\
                    GROUP BY d.last_name \
                    HAVING COUNT(1)>1\
                ) as b\
                WHERE e.last_name = b.last_name\
            )\
)";
}

int main(int argc, char *argv[])
{
    QLibrary libmysql("libmysql.dll");
    QApplication::addLibraryPath("./plugins");
    libmysql.load();
    QApplication a(argc, argv);
    login l;
    //创建登录对象
    l.show();
    //初始化界面
    MainWindow w;
    //创建app界面对象
    regis r;
    //创造注册界面对象
    note n;
    //创造单词本界面对象
    cet6 c;
    //创造六级单词库对象
    Notepad np;
    //创造notepad对象
    tenw_words t;
    //创造tenw_words对象
    gaopin g;
    //创造高频单词库对象

    //连接信号槽
    QObject::connect(&l,SIGNAL(showmain()),&w,SLOT(receivelogin()));
    QObject::connect(&l,SIGNAL(showreg()),&r,SLOT(receivereg()));
    QObject::connect(&w,SIGNAL(shownote()),&n,SLOT(receiveshownote()));
    QObject::connect(&w,SIGNAL(showcet()),&c,SLOT(receiveshowcet6()));
    QObject::connect(&w,SIGNAL(shownotepad()),&np,SLOT(receiveshownotepad()));
    QObject::connect(&w,SIGNAL(showlogin()),&l,SLOT(receiveshowlogin()));
    QObject::connect(&w,SIGNAL(showwords()),&t,SLOT(receiveshowwords()));
    QObject::connect(&w,SIGNAL(showgaopin()),&g,SLOT(receiveshowgaopin()));
    deletemany();
    return a.exec();
}
