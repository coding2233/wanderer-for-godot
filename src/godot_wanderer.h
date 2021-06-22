#ifndef __GODOT_WANDERER_H__
#define __GODOT_WANDERER_H__

#include <Godot.hpp>
#include <Node.hpp>

#include "export.h"

using namespace godot;

class GodotWanderer : public Node
{
    GODOT_CLASS(GodotWanderer, Node);

private:
    /* data */
public:
    String server_name_;
    int server_port_;

    GodotWanderer(/* args */);
    ~GodotWanderer();

    void _init();

    void _process(float delta);

    Variant method(Variant arg)
    {
        Variant ret;
        ret = arg;

        return ret;
    }

    static void _register_methods()
    {
        register_method("method", &GodotWanderer::method);

        register_method("_process", &GodotWanderer::_process);

        // /**
        //  * The line below is equivalent to the following GDScript export:
        //  *	 export var _name = "SimpleClass"
        //  **/
        register_property<GodotWanderer, String>("Server name", &GodotWanderer::server_name_, String("localhost"));
        register_property<GodotWanderer, int>("Server port", &GodotWanderer::server_port_, 2233);

        /** Alternatively, with getter and setter methods: */
        // register_property<GodotWanderer, int>("Server port", &GodotWanderer::set_value, &GodotWanderer::get_value, 0);

        // /** Registering a signal: **/
        // register_signal<SimpleClass>("signal_name0"); // windows: error C2668: 'godot::register_signal': ambiguous call to overloaded function
        // register_signal<SimpleClass>("signal_name1", "string_argument", GODOT_VARIANT_TYPE_STRING);
    }

    // void set_value(int v)
    // {
    //     _value = v;
    // }

    // int get_value()
    // {
    //     return _value;
    // }
};

#endif