#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "viewmodel.h"
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    ViewModel model();
    //QObject* value = ;
   // engine.rootContext()->setContextProperty("viewModel", &model  );
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));



    return app.exec();
}
