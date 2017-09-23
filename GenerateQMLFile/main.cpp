#include <QCoreApplication>
#include <QtDebug>
#include <QFile>
#include <memory>
#include "importelement.h"
#include "typeelement.h"
#include "common.h"
/**
 * @brief main describes COMPOSITE DESIGN PATTERN https://en.wikipedia.org/wiki/Composite_pattern
 * As per Wiki, The intent of a composite is to "compose" objects into TREE STRUCTURES to represent part-whole hierarchies. Implementing the composite pattern lets CLIENTS TREAT INDIVIDUAL OBJECTS and compositions uniformly
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ///----------------------------------
    ///CLIENTS TREAT INDIVIDUAL OBJECTS
    ///----------------------------------
    ///root element


    TypeElement_ptr root(new TypeElement("TestCase", true));
    ///create import line.
    ISerializeComponent_prt serialize(new ImportElement("UseCase", 1, 0));
    root->addImport(serialize);


    ///Child element1
    ///
    TypeElement_ptr  buttonClick1(new TypeElement("ButtonClick1"));

    //Child element2
    TypeElement_ptr  buttonClick2(new TypeElement("ButtonClick2"));
    root->add(buttonClick1); //Add child1
    root->add(buttonClick2); //Add child2



    QByteArray array;
    ///--------------------------------------
    //"COMPOSE OBJECTS INTO TREE STRUCTURES
    ///---------------------------------------
    root->serialize(array);//Ready to start operation called "serialize"

    buttonClick1.reset();
    buttonClick2.reset();
    root.reset();

    qDebug()<< array;//Will print the qml.

    QFile file("myqml.qml");
    if(file.open(QFile::WriteOnly))
    {
        file.write(array);//Would create qml file.
        file.close();
    }
    return a.exec();
}
