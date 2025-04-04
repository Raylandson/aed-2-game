#pragma once

#include <room_generator.h>
#include <room.h>
#include <robot_base.h>

using namespace godot;

class RobotTremaux : public RobotBase {
	GDCLASS(RobotTremaux, RobotBase);
	
	protected:
    static void _bind_methods();
	
	public:
   	virtual void _ready() override;
    virtual void _process(double p_delta) override;
    void calculate_new_pos() override;
    void update_weights(Ref<Room> room) override;
    void initialize_weight_array() override;
	Vector2i min_weighted_dir(Ref<Room> room) override;

	RobotTremaux();
};
	
