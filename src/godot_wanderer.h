#ifndef __GODOT_WANDERER_H__
#define __GODOT_WANDERER_H__

#include <Godot.hpp>
#include <Node.hpp>

using namespace godot;

class GodotWanderer : public Node
{
    GODOT_CLASS(GodotWanderer, Node);

private:
    /* data */
public:
    GodotWanderer(/* args */);
    ~GodotWanderer();

    void _init();

    static void _register_methods()
    {
        // register_method("method", &SimpleClass::method);
        // /**
        //  * The line below is equivalent to the following GDScript export:
        //  *	 export var _name = "SimpleClass"
        //  **/
        // register_property<SimpleClass, String>("name", &SimpleClass::_name, String("SimpleClass"));

        // /** Alternatively, with getter and setter methods: */
        // register_property<SimpleClass, int>("value", &SimpleClass::set_value, &SimpleClass::get_value, 0);

        // /** Registering a signal: **/
        // register_signal<SimpleClass>("signal_name0"); // windows: error C2668: 'godot::register_signal': ambiguous call to overloaded function
        // register_signal<SimpleClass>("signal_name1", "string_argument", GODOT_VARIANT_TYPE_STRING);
    }
};

#endif