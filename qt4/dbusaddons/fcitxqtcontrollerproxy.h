/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -p fcitxqtcontrollerproxy -c FcitxQtControllerProxy interfaces/org.fcitx.Fcitx.Controller1.xml -i fcitxqtdbustypes.h -i fcitx5qt4dbusaddons_export.h
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef FCITXQTCONTROLLERPROXY_H_1495144859
#define FCITXQTCONTROLLERPROXY_H_1495144859

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "fcitxqtdbustypes.h"
#include "fcitx5qt4dbusaddons_export.h"

/*
 * Proxy class for interface org.fcitx.Fcitx.Controller1
 */
class FCITX5QT4DBUSADDONS_EXPORT FcitxQtControllerProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fcitx.Fcitx.Controller1"; }

public:
    FcitxQtControllerProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~FcitxQtControllerProxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Activate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Activate"), argumentList);
    }

    inline QDBusPendingReply<QString> AddonForIM(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("AddonForIM"), argumentList);
    }

    inline QDBusPendingReply<> Configure()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Configure"), argumentList);
    }

    inline QDBusPendingReply<> ConfigureAddon(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("ConfigureAddon"), argumentList);
    }

    inline QDBusPendingReply<> ConfigureIM(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("ConfigureIM"), argumentList);
    }

    inline QDBusPendingReply<QString> CurrentInputMethod()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("CurrentInputMethod"), argumentList);
    }

    inline QDBusPendingReply<QString> CurrentUI()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("CurrentUI"), argumentList);
    }

    inline QDBusPendingReply<> Exit()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Exit"), argumentList);
    }

    inline QDBusPendingReply<> ReloadAddonConfig(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("ReloadAddonConfig"), argumentList);
    }

    inline QDBusPendingReply<> ReloadConfig()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ReloadConfig"), argumentList);
    }

    inline QDBusPendingReply<> ResetIMList()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ResetIMList"), argumentList);
    }

    inline QDBusPendingReply<> Restart()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Restart"), argumentList);
    }

    inline QDBusPendingReply<> SetCurrentIM(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("SetCurrentIM"), argumentList);
    }

    inline QDBusPendingReply<int> State()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("State"), argumentList);
    }

    inline QDBusPendingReply<> Toggle()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Toggle"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
