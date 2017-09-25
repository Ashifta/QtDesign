# QtDesign
This repository holds the basic information of Qt with Object oriented design methodologies like Composite, Subscriber, Chain Of resposibility, etc 

<b> A ) Composite: Example GenerateQMLFile</b>
Create a QML file
 Purpose: To create a valid QML file based on stream of data(QString) and load the file to Qt Engine for processing.

 Brief about QML file: Qt Meta Object Language, HTML king of declarative file. Used to develop any kind applications build on topof
 C++/Qt framework. Which is easy to code animations, state and layout GUI layers.
 
 Success Critera: A valid QML file should load successfully either using load() API of QQmlApplicationEngine or create() API QQmlComponent. 

 Dependancy: Each element in QML should have a corresponding C++ class associated with it, this is to create object of the type. In order to  achive this, Import statement should be specified in each QML. Corresponding class/Object should be available with Qt Application, this is achived by using a template function to register any C++ class which derived from QObject. We call it has "qmlRegisterType()"

 Design Approach: QML is a tree structure like a parent child relationship, any QML file having following elemets associated with it.
1. Import statement  
2. QML Type Called TypeElement

  
In order to create such a tree structure, need to add and remove child components, and serialize(operation) each elements of data to create a QML file.
Here we can use Composite Desiign patttern. Please check <b>GenerateQMLFile</b> for basic implemetation of composite type.

<b> B ) Observer Pattern: Example IPhoneUpdate</b>
In real world senario, Mr X is like to know the <i>updates</i> of new iphone series from Apple Inc. He <i>registers</i> to AppleInc for iphone updates. There are N number of Mr X and Mrs Y's are registered with Apple Inc.
    After few months Apple <i>publish</i> new version of update to all registered customers. Mr X and Mrs Y are now updated to new iPhone.
    
 Mr X should have a "update" method, Mr X should have identity, Apple Inc should provide an interface to puplic to register for iPhone update. Apple Inc should publish the notification.
    

