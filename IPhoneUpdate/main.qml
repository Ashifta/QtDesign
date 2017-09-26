import QtQuick 2.7
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    ColumnLayout
    {
        GroupBox
        {
            background: Rectangle {
                 //  y: control.topPadding - control.padding
                   width: parent.width
                   height: parent.height// - control.topPadding + control.padding
                   color: "transparent"
                   border.color: "#21be2b"
                   radius: 2
               }
           title: "Register Area for customer"
            //Display option to register by selecting check box
            //Group "Register"
           ColumnLayout
           {
            RowLayout{
                Label{
                    text:"Mr X"
                }

                Label{
                    text:"Register Iphone"
                }
                CheckBox{
                    id:mrX
                    objectName: "mrx"
                    onCheckedChanged:
                    {
                       //(checked)?register:unregister with mrx
                    }
                }
                Label{
                    text:"[Update from Apple]"
                }
                Label{
                    text:"Not Registered"
                }

            }
            RowLayout{
                Label{
                    text:"Mr X"
                }

                Label{
                    text:"Register Iphone"
                }
                CheckBox{
                    id:mrY
                    objectName: "mrY"
                    onCheckedChanged:
                    {
                       //(checked)?register:unregister with mrY
                    }
                }
                Label{
                    text:"[Update from Apple]"
                }
                Label{
                    text:"Not Registered"
                }

            }
           }
        }

        GroupBox
        {
            title: "Apple Launching Area"
            background: Rectangle {
                 //  y: control.topPadding - control.padding
                   width: parent.width
                   height: parent.height// - control.topPadding + control.padding
                   color: "transparent"
                   border.color: "#21be2b"
                   radius: 2
               }
            RowLayout{
                Label{
                    text:"New IPhone X"
                }

                Button
                {
                    text: "Publish"
                    onClicked:
                    {
                        //Invode AppleIphonePublisher.launchNewIIphone
                    }
                }
            }
        }
    }

    //Mr X"Label"   RegisterIphone?"Label" []*CheckBox*     [Update from Apple]:Not yet released"Label"
    //Mrs Y"Label"   RegisterIphone?"Label" []*CheckBox*     [Update from Apple]:Not yet released"Label"

    //Apple Launching Area"Group"
    //Publish "New IPhone X", changed to Published.
}
