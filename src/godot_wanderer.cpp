#include "godot_wanderer.h"

void OnWandererConnect(bool result, const char *data)
{
    Godot::print("OnWandererConnect: ");
}

GodotWanderer::GodotWanderer(/* args */)
{
}

GodotWanderer::~GodotWanderer()
{
}

void GodotWanderer::_init()
{
    // _value = 0;

    Godot::print("This is test! [GodotWanderer::_init()]");

    WandererTest(" GodotWanderer::_init() --> Wanderer test");

    WandererConnect(server_name_.alloc_c_string(), server_port_, OnWandererConnect);
    // WandererConnect();
}

void GodotWanderer::_process(float delta)
{
}