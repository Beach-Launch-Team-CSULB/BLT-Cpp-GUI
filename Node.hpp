#ifndef NODE_HPP
#define NODE_HPP

#include <QObject>
#include <qqml.h>
// make a enum class nested in QOBject class in order to use Q_ENUM to expose the enum class to QML
// don't think there is any reason to expose this to QML, but I'll just keep it here for now. Might just turn it back to a normal enum class if later on
class Node: public QObject
{
    Q_OBJECT
    QML_ELEMENT
    QML_UNCREATABLE("C++ instantiation only")
public:
    enum class NodeID
    {
        CONTROL_NODE = 0,
        GLOBAL_CALL = 1,
        ENGINE_NODE = 2,
        PROP_NODE = 3,
        RENEGADE_ADTL_SENSOR = 4,
        TELEMETRY = 5,
        CONTROL_NODE_LOGGER_INTERPRETER = 6,
        PASA_NODE_ADTL_SENSOR = 7,
        PASA_NODE = 8
    };
    Q_ENUM(NodeID)

    explicit Node() = delete;

};

#endif
