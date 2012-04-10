#include <redshiftenabler.h>
#include <QDebug>

void RedshiftEnabler::sendSignal()
{
    QDBusMessage message = QDBusMessage::createSignal("/", "org.kde.redshift", "readyForStart");
    QDBusConnection::sessionBus().send(message);
    qDebug() << "RSENT";
}