// MESSAGE CONTROLLER_DATA PACKING

#define MAVLINK_MSG_ID_CONTROLLER_DATA 180

typedef struct __mavlink_controller_data_t
{
 int32_t lat; ///< Latitude (WGS84) (degrees * 1e7). If unknown, set to 0.
 int32_t lon; ///< Longitude (WGS84) (degrees * 1e7). If unknown, set to 0.
 uint32_t time_boot_ms; ///< Timestamp (milliseconds since system boot)
 int32_t north; ///< North-component of vehicle position in the local tangent plane (m * 1e3)
 int32_t east; ///< East-component of vehicle position in the local tangent plane (m * 1e3)
 int16_t last_wp_north; ///< The north component of the local coordinates of the last waypoint (m * 10).
 int16_t last_wp_east; ///< The east component of the local coordinates of the last waypoint (m * 10).
 int16_t next_wp_north; ///< The north component of the local coordinates of the next waypoint (m * 10).
 int16_t next_wp_east; ///< The east component of the local coordinates of the next waypoint (m * 10).
 int16_t w; ///< Quaternion component 1, w (1 in null-rotation) (1e4)
 int16_t x; ///< Quaternion component 2, x (0 in null-rotation) (1e4)
 int16_t y; ///< Quaternion component 3, y (0 in null-rotation) (1e4)
 int16_t z; ///< Quaternion component 4, z (0 in null-rotation) (1e4)
 int16_t roll_speed; ///< Roll angular speed (rad/s * 1e4)
 int16_t pitch_speed; ///< Pitch angular speed (rad/s * 1e4)
 int16_t yaw_speed; ///< Yaw angular speed (rad/s * 1e4)
 uint16_t water_speed; ///< Forward water speed (m/s * 1e4).
 int16_t vel; ///< GPS ground speed (m/s * 1e3). If unknown, set to 0.
 uint16_t cog; ///< Course over ground, from 0 to 2*pi (rad * 1e4). If unknown, set to 0.
 int16_t north_speed; ///< North-component of speed (m/s * 1e3)
 int16_t east_speed; ///< East-component of speed (m/s * 1e3)
 int16_t yaw_rate_global; ///< The yaw rate converted to the global frame (rad/s * 1e4)
 int16_t a_cmd; ///< This is the lateral acceleration as commanded by the onboard L2+ controller (m/s^2 * 1e5)
 int16_t aim_point_n; ///< North-coordinate of the L2+ aim point (m * 10)
 int16_t aim_point_e; ///< East-coordinate of the L2+ aim point (m * 10)
 int16_t commanded_rudder_angle; ///< This is the rudder angle command as commanded by the onboard autonomous controller, positive indicates port-side (rad * 1e4)
 int16_t commanded_throttle; ///< This is the throttle command as commanded by the onboard autonomous controller. It's in units of 1/1023*100% of max current and positive values propel the vehicle forward.
 int16_t rudder_angle; ///< The current rudder angle (rad * 1e4)
 int16_t prop_speed; ///< Propeller speed, positive values mean the vessel will be propelled forward. (rpm * 100)
 uint8_t fix_type; ///< 0: no fix, 1 valid fix (2D or better).
 uint8_t reset; ///< 0 indicates system is operating normally, 1 indicates it's held in reset.
} mavlink_controller_data_t;

#define MAVLINK_MSG_ID_CONTROLLER_DATA_LEN 70
#define MAVLINK_MSG_ID_180_LEN 70

#define MAVLINK_MSG_ID_CONTROLLER_DATA_CRC 24
#define MAVLINK_MSG_ID_180_CRC 24



#define MAVLINK_MESSAGE_INFO_CONTROLLER_DATA { \
	"CONTROLLER_DATA", \
	31, \
	{  { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_controller_data_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_controller_data_t, lon) }, \
         { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_controller_data_t, time_boot_ms) }, \
         { "north", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_controller_data_t, north) }, \
         { "east", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_controller_data_t, east) }, \
         { "last_wp_north", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_controller_data_t, last_wp_north) }, \
         { "last_wp_east", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_controller_data_t, last_wp_east) }, \
         { "next_wp_north", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_controller_data_t, next_wp_north) }, \
         { "next_wp_east", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_controller_data_t, next_wp_east) }, \
         { "w", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_controller_data_t, w) }, \
         { "x", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_controller_data_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_controller_data_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_controller_data_t, z) }, \
         { "roll_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_controller_data_t, roll_speed) }, \
         { "pitch_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_controller_data_t, pitch_speed) }, \
         { "yaw_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_controller_data_t, yaw_speed) }, \
         { "water_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_controller_data_t, water_speed) }, \
         { "vel", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_controller_data_t, vel) }, \
         { "cog", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_controller_data_t, cog) }, \
         { "north_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_controller_data_t, north_speed) }, \
         { "east_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_controller_data_t, east_speed) }, \
         { "yaw_rate_global", NULL, MAVLINK_TYPE_INT16_T, 0, 52, offsetof(mavlink_controller_data_t, yaw_rate_global) }, \
         { "a_cmd", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_controller_data_t, a_cmd) }, \
         { "aim_point_n", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_controller_data_t, aim_point_n) }, \
         { "aim_point_e", NULL, MAVLINK_TYPE_INT16_T, 0, 58, offsetof(mavlink_controller_data_t, aim_point_e) }, \
         { "commanded_rudder_angle", NULL, MAVLINK_TYPE_INT16_T, 0, 60, offsetof(mavlink_controller_data_t, commanded_rudder_angle) }, \
         { "commanded_throttle", NULL, MAVLINK_TYPE_INT16_T, 0, 62, offsetof(mavlink_controller_data_t, commanded_throttle) }, \
         { "rudder_angle", NULL, MAVLINK_TYPE_INT16_T, 0, 64, offsetof(mavlink_controller_data_t, rudder_angle) }, \
         { "prop_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 66, offsetof(mavlink_controller_data_t, prop_speed) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_controller_data_t, fix_type) }, \
         { "reset", NULL, MAVLINK_TYPE_UINT8_T, 0, 69, offsetof(mavlink_controller_data_t, reset) }, \
         } \
}


/**
 * @brief Pack a controller_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param last_wp_north The north component of the local coordinates of the last waypoint (m * 10).
 * @param last_wp_east The east component of the local coordinates of the last waypoint (m * 10).
 * @param next_wp_north The north component of the local coordinates of the next waypoint (m * 10).
 * @param next_wp_east The east component of the local coordinates of the next waypoint (m * 10).
 * @param w Quaternion component 1, w (1 in null-rotation) (1e4)
 * @param x Quaternion component 2, x (0 in null-rotation) (1e4)
 * @param y Quaternion component 3, y (0 in null-rotation) (1e4)
 * @param z Quaternion component 4, z (0 in null-rotation) (1e4)
 * @param roll_speed Roll angular speed (rad/s * 1e4)
 * @param pitch_speed Pitch angular speed (rad/s * 1e4)
 * @param yaw_speed Yaw angular speed (rad/s * 1e4)
 * @param water_speed Forward water speed (m/s * 1e4).
 * @param fix_type 0: no fix, 1 valid fix (2D or better).
 * @param lat Latitude (WGS84) (degrees * 1e7). If unknown, set to 0.
 * @param lon Longitude (WGS84) (degrees * 1e7). If unknown, set to 0.
 * @param vel GPS ground speed (m/s * 1e3). If unknown, set to 0.
 * @param cog Course over ground, from 0 to 2*pi (rad * 1e4). If unknown, set to 0.
 * @param reset 0 indicates system is operating normally, 1 indicates it's held in reset.
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param north North-component of vehicle position in the local tangent plane (m * 1e3)
 * @param east East-component of vehicle position in the local tangent plane (m * 1e3)
 * @param north_speed North-component of speed (m/s * 1e3)
 * @param east_speed East-component of speed (m/s * 1e3)
 * @param yaw_rate_global The yaw rate converted to the global frame (rad/s * 1e4)
 * @param a_cmd This is the lateral acceleration as commanded by the onboard L2+ controller (m/s^2 * 1e5)
 * @param aim_point_n North-coordinate of the L2+ aim point (m * 10)
 * @param aim_point_e East-coordinate of the L2+ aim point (m * 10)
 * @param commanded_rudder_angle This is the rudder angle command as commanded by the onboard autonomous controller, positive indicates port-side (rad * 1e4)
 * @param commanded_throttle This is the throttle command as commanded by the onboard autonomous controller. It's in units of 1/1023*100% of max current and positive values propel the vehicle forward.
 * @param rudder_angle The current rudder angle (rad * 1e4)
 * @param prop_speed Propeller speed, positive values mean the vessel will be propelled forward. (rpm * 100)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_controller_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int16_t last_wp_north, int16_t last_wp_east, int16_t next_wp_north, int16_t next_wp_east, int16_t w, int16_t x, int16_t y, int16_t z, int16_t roll_speed, int16_t pitch_speed, int16_t yaw_speed, uint16_t water_speed, uint8_t fix_type, int32_t lat, int32_t lon, int16_t vel, uint16_t cog, uint8_t reset, uint32_t time_boot_ms, int32_t north, int32_t east, int16_t north_speed, int16_t east_speed, int16_t yaw_rate_global, int16_t a_cmd, int16_t aim_point_n, int16_t aim_point_e, int16_t commanded_rudder_angle, int16_t commanded_throttle, int16_t rudder_angle, int16_t prop_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTROLLER_DATA_LEN];
	_mav_put_int32_t(buf, 0, lat);
	_mav_put_int32_t(buf, 4, lon);
	_mav_put_uint32_t(buf, 8, time_boot_ms);
	_mav_put_int32_t(buf, 12, north);
	_mav_put_int32_t(buf, 16, east);
	_mav_put_int16_t(buf, 20, last_wp_north);
	_mav_put_int16_t(buf, 22, last_wp_east);
	_mav_put_int16_t(buf, 24, next_wp_north);
	_mav_put_int16_t(buf, 26, next_wp_east);
	_mav_put_int16_t(buf, 28, w);
	_mav_put_int16_t(buf, 30, x);
	_mav_put_int16_t(buf, 32, y);
	_mav_put_int16_t(buf, 34, z);
	_mav_put_int16_t(buf, 36, roll_speed);
	_mav_put_int16_t(buf, 38, pitch_speed);
	_mav_put_int16_t(buf, 40, yaw_speed);
	_mav_put_uint16_t(buf, 42, water_speed);
	_mav_put_int16_t(buf, 44, vel);
	_mav_put_uint16_t(buf, 46, cog);
	_mav_put_int16_t(buf, 48, north_speed);
	_mav_put_int16_t(buf, 50, east_speed);
	_mav_put_int16_t(buf, 52, yaw_rate_global);
	_mav_put_int16_t(buf, 54, a_cmd);
	_mav_put_int16_t(buf, 56, aim_point_n);
	_mav_put_int16_t(buf, 58, aim_point_e);
	_mav_put_int16_t(buf, 60, commanded_rudder_angle);
	_mav_put_int16_t(buf, 62, commanded_throttle);
	_mav_put_int16_t(buf, 64, rudder_angle);
	_mav_put_int16_t(buf, 66, prop_speed);
	_mav_put_uint8_t(buf, 68, fix_type);
	_mav_put_uint8_t(buf, 69, reset);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN);
#else
	mavlink_controller_data_t packet;
	packet.lat = lat;
	packet.lon = lon;
	packet.time_boot_ms = time_boot_ms;
	packet.north = north;
	packet.east = east;
	packet.last_wp_north = last_wp_north;
	packet.last_wp_east = last_wp_east;
	packet.next_wp_north = next_wp_north;
	packet.next_wp_east = next_wp_east;
	packet.w = w;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.roll_speed = roll_speed;
	packet.pitch_speed = pitch_speed;
	packet.yaw_speed = yaw_speed;
	packet.water_speed = water_speed;
	packet.vel = vel;
	packet.cog = cog;
	packet.north_speed = north_speed;
	packet.east_speed = east_speed;
	packet.yaw_rate_global = yaw_rate_global;
	packet.a_cmd = a_cmd;
	packet.aim_point_n = aim_point_n;
	packet.aim_point_e = aim_point_e;
	packet.commanded_rudder_angle = commanded_rudder_angle;
	packet.commanded_throttle = commanded_throttle;
	packet.rudder_angle = rudder_angle;
	packet.prop_speed = prop_speed;
	packet.fix_type = fix_type;
	packet.reset = reset;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CONTROLLER_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN, MAVLINK_MSG_ID_CONTROLLER_DATA_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN);
#endif
}

/**
 * @brief Pack a controller_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param last_wp_north The north component of the local coordinates of the last waypoint (m * 10).
 * @param last_wp_east The east component of the local coordinates of the last waypoint (m * 10).
 * @param next_wp_north The north component of the local coordinates of the next waypoint (m * 10).
 * @param next_wp_east The east component of the local coordinates of the next waypoint (m * 10).
 * @param w Quaternion component 1, w (1 in null-rotation) (1e4)
 * @param x Quaternion component 2, x (0 in null-rotation) (1e4)
 * @param y Quaternion component 3, y (0 in null-rotation) (1e4)
 * @param z Quaternion component 4, z (0 in null-rotation) (1e4)
 * @param roll_speed Roll angular speed (rad/s * 1e4)
 * @param pitch_speed Pitch angular speed (rad/s * 1e4)
 * @param yaw_speed Yaw angular speed (rad/s * 1e4)
 * @param water_speed Forward water speed (m/s * 1e4).
 * @param fix_type 0: no fix, 1 valid fix (2D or better).
 * @param lat Latitude (WGS84) (degrees * 1e7). If unknown, set to 0.
 * @param lon Longitude (WGS84) (degrees * 1e7). If unknown, set to 0.
 * @param vel GPS ground speed (m/s * 1e3). If unknown, set to 0.
 * @param cog Course over ground, from 0 to 2*pi (rad * 1e4). If unknown, set to 0.
 * @param reset 0 indicates system is operating normally, 1 indicates it's held in reset.
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param north North-component of vehicle position in the local tangent plane (m * 1e3)
 * @param east East-component of vehicle position in the local tangent plane (m * 1e3)
 * @param north_speed North-component of speed (m/s * 1e3)
 * @param east_speed East-component of speed (m/s * 1e3)
 * @param yaw_rate_global The yaw rate converted to the global frame (rad/s * 1e4)
 * @param a_cmd This is the lateral acceleration as commanded by the onboard L2+ controller (m/s^2 * 1e5)
 * @param aim_point_n North-coordinate of the L2+ aim point (m * 10)
 * @param aim_point_e East-coordinate of the L2+ aim point (m * 10)
 * @param commanded_rudder_angle This is the rudder angle command as commanded by the onboard autonomous controller, positive indicates port-side (rad * 1e4)
 * @param commanded_throttle This is the throttle command as commanded by the onboard autonomous controller. It's in units of 1/1023*100% of max current and positive values propel the vehicle forward.
 * @param rudder_angle The current rudder angle (rad * 1e4)
 * @param prop_speed Propeller speed, positive values mean the vessel will be propelled forward. (rpm * 100)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_controller_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int16_t last_wp_north,int16_t last_wp_east,int16_t next_wp_north,int16_t next_wp_east,int16_t w,int16_t x,int16_t y,int16_t z,int16_t roll_speed,int16_t pitch_speed,int16_t yaw_speed,uint16_t water_speed,uint8_t fix_type,int32_t lat,int32_t lon,int16_t vel,uint16_t cog,uint8_t reset,uint32_t time_boot_ms,int32_t north,int32_t east,int16_t north_speed,int16_t east_speed,int16_t yaw_rate_global,int16_t a_cmd,int16_t aim_point_n,int16_t aim_point_e,int16_t commanded_rudder_angle,int16_t commanded_throttle,int16_t rudder_angle,int16_t prop_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTROLLER_DATA_LEN];
	_mav_put_int32_t(buf, 0, lat);
	_mav_put_int32_t(buf, 4, lon);
	_mav_put_uint32_t(buf, 8, time_boot_ms);
	_mav_put_int32_t(buf, 12, north);
	_mav_put_int32_t(buf, 16, east);
	_mav_put_int16_t(buf, 20, last_wp_north);
	_mav_put_int16_t(buf, 22, last_wp_east);
	_mav_put_int16_t(buf, 24, next_wp_north);
	_mav_put_int16_t(buf, 26, next_wp_east);
	_mav_put_int16_t(buf, 28, w);
	_mav_put_int16_t(buf, 30, x);
	_mav_put_int16_t(buf, 32, y);
	_mav_put_int16_t(buf, 34, z);
	_mav_put_int16_t(buf, 36, roll_speed);
	_mav_put_int16_t(buf, 38, pitch_speed);
	_mav_put_int16_t(buf, 40, yaw_speed);
	_mav_put_uint16_t(buf, 42, water_speed);
	_mav_put_int16_t(buf, 44, vel);
	_mav_put_uint16_t(buf, 46, cog);
	_mav_put_int16_t(buf, 48, north_speed);
	_mav_put_int16_t(buf, 50, east_speed);
	_mav_put_int16_t(buf, 52, yaw_rate_global);
	_mav_put_int16_t(buf, 54, a_cmd);
	_mav_put_int16_t(buf, 56, aim_point_n);
	_mav_put_int16_t(buf, 58, aim_point_e);
	_mav_put_int16_t(buf, 60, commanded_rudder_angle);
	_mav_put_int16_t(buf, 62, commanded_throttle);
	_mav_put_int16_t(buf, 64, rudder_angle);
	_mav_put_int16_t(buf, 66, prop_speed);
	_mav_put_uint8_t(buf, 68, fix_type);
	_mav_put_uint8_t(buf, 69, reset);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN);
#else
	mavlink_controller_data_t packet;
	packet.lat = lat;
	packet.lon = lon;
	packet.time_boot_ms = time_boot_ms;
	packet.north = north;
	packet.east = east;
	packet.last_wp_north = last_wp_north;
	packet.last_wp_east = last_wp_east;
	packet.next_wp_north = next_wp_north;
	packet.next_wp_east = next_wp_east;
	packet.w = w;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.roll_speed = roll_speed;
	packet.pitch_speed = pitch_speed;
	packet.yaw_speed = yaw_speed;
	packet.water_speed = water_speed;
	packet.vel = vel;
	packet.cog = cog;
	packet.north_speed = north_speed;
	packet.east_speed = east_speed;
	packet.yaw_rate_global = yaw_rate_global;
	packet.a_cmd = a_cmd;
	packet.aim_point_n = aim_point_n;
	packet.aim_point_e = aim_point_e;
	packet.commanded_rudder_angle = commanded_rudder_angle;
	packet.commanded_throttle = commanded_throttle;
	packet.rudder_angle = rudder_angle;
	packet.prop_speed = prop_speed;
	packet.fix_type = fix_type;
	packet.reset = reset;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CONTROLLER_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN, MAVLINK_MSG_ID_CONTROLLER_DATA_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN);
#endif
}

/**
 * @brief Encode a controller_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param controller_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_controller_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_controller_data_t* controller_data)
{
	return mavlink_msg_controller_data_pack(system_id, component_id, msg, controller_data->last_wp_north, controller_data->last_wp_east, controller_data->next_wp_north, controller_data->next_wp_east, controller_data->w, controller_data->x, controller_data->y, controller_data->z, controller_data->roll_speed, controller_data->pitch_speed, controller_data->yaw_speed, controller_data->water_speed, controller_data->fix_type, controller_data->lat, controller_data->lon, controller_data->vel, controller_data->cog, controller_data->reset, controller_data->time_boot_ms, controller_data->north, controller_data->east, controller_data->north_speed, controller_data->east_speed, controller_data->yaw_rate_global, controller_data->a_cmd, controller_data->aim_point_n, controller_data->aim_point_e, controller_data->commanded_rudder_angle, controller_data->commanded_throttle, controller_data->rudder_angle, controller_data->prop_speed);
}

/**
 * @brief Encode a controller_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param controller_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_controller_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_controller_data_t* controller_data)
{
	return mavlink_msg_controller_data_pack_chan(system_id, component_id, chan, msg, controller_data->last_wp_north, controller_data->last_wp_east, controller_data->next_wp_north, controller_data->next_wp_east, controller_data->w, controller_data->x, controller_data->y, controller_data->z, controller_data->roll_speed, controller_data->pitch_speed, controller_data->yaw_speed, controller_data->water_speed, controller_data->fix_type, controller_data->lat, controller_data->lon, controller_data->vel, controller_data->cog, controller_data->reset, controller_data->time_boot_ms, controller_data->north, controller_data->east, controller_data->north_speed, controller_data->east_speed, controller_data->yaw_rate_global, controller_data->a_cmd, controller_data->aim_point_n, controller_data->aim_point_e, controller_data->commanded_rudder_angle, controller_data->commanded_throttle, controller_data->rudder_angle, controller_data->prop_speed);
}

/**
 * @brief Send a controller_data message
 * @param chan MAVLink channel to send the message
 *
 * @param last_wp_north The north component of the local coordinates of the last waypoint (m * 10).
 * @param last_wp_east The east component of the local coordinates of the last waypoint (m * 10).
 * @param next_wp_north The north component of the local coordinates of the next waypoint (m * 10).
 * @param next_wp_east The east component of the local coordinates of the next waypoint (m * 10).
 * @param w Quaternion component 1, w (1 in null-rotation) (1e4)
 * @param x Quaternion component 2, x (0 in null-rotation) (1e4)
 * @param y Quaternion component 3, y (0 in null-rotation) (1e4)
 * @param z Quaternion component 4, z (0 in null-rotation) (1e4)
 * @param roll_speed Roll angular speed (rad/s * 1e4)
 * @param pitch_speed Pitch angular speed (rad/s * 1e4)
 * @param yaw_speed Yaw angular speed (rad/s * 1e4)
 * @param water_speed Forward water speed (m/s * 1e4).
 * @param fix_type 0: no fix, 1 valid fix (2D or better).
 * @param lat Latitude (WGS84) (degrees * 1e7). If unknown, set to 0.
 * @param lon Longitude (WGS84) (degrees * 1e7). If unknown, set to 0.
 * @param vel GPS ground speed (m/s * 1e3). If unknown, set to 0.
 * @param cog Course over ground, from 0 to 2*pi (rad * 1e4). If unknown, set to 0.
 * @param reset 0 indicates system is operating normally, 1 indicates it's held in reset.
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param north North-component of vehicle position in the local tangent plane (m * 1e3)
 * @param east East-component of vehicle position in the local tangent plane (m * 1e3)
 * @param north_speed North-component of speed (m/s * 1e3)
 * @param east_speed East-component of speed (m/s * 1e3)
 * @param yaw_rate_global The yaw rate converted to the global frame (rad/s * 1e4)
 * @param a_cmd This is the lateral acceleration as commanded by the onboard L2+ controller (m/s^2 * 1e5)
 * @param aim_point_n North-coordinate of the L2+ aim point (m * 10)
 * @param aim_point_e East-coordinate of the L2+ aim point (m * 10)
 * @param commanded_rudder_angle This is the rudder angle command as commanded by the onboard autonomous controller, positive indicates port-side (rad * 1e4)
 * @param commanded_throttle This is the throttle command as commanded by the onboard autonomous controller. It's in units of 1/1023*100% of max current and positive values propel the vehicle forward.
 * @param rudder_angle The current rudder angle (rad * 1e4)
 * @param prop_speed Propeller speed, positive values mean the vessel will be propelled forward. (rpm * 100)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_controller_data_send(mavlink_channel_t chan, int16_t last_wp_north, int16_t last_wp_east, int16_t next_wp_north, int16_t next_wp_east, int16_t w, int16_t x, int16_t y, int16_t z, int16_t roll_speed, int16_t pitch_speed, int16_t yaw_speed, uint16_t water_speed, uint8_t fix_type, int32_t lat, int32_t lon, int16_t vel, uint16_t cog, uint8_t reset, uint32_t time_boot_ms, int32_t north, int32_t east, int16_t north_speed, int16_t east_speed, int16_t yaw_rate_global, int16_t a_cmd, int16_t aim_point_n, int16_t aim_point_e, int16_t commanded_rudder_angle, int16_t commanded_throttle, int16_t rudder_angle, int16_t prop_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTROLLER_DATA_LEN];
	_mav_put_int32_t(buf, 0, lat);
	_mav_put_int32_t(buf, 4, lon);
	_mav_put_uint32_t(buf, 8, time_boot_ms);
	_mav_put_int32_t(buf, 12, north);
	_mav_put_int32_t(buf, 16, east);
	_mav_put_int16_t(buf, 20, last_wp_north);
	_mav_put_int16_t(buf, 22, last_wp_east);
	_mav_put_int16_t(buf, 24, next_wp_north);
	_mav_put_int16_t(buf, 26, next_wp_east);
	_mav_put_int16_t(buf, 28, w);
	_mav_put_int16_t(buf, 30, x);
	_mav_put_int16_t(buf, 32, y);
	_mav_put_int16_t(buf, 34, z);
	_mav_put_int16_t(buf, 36, roll_speed);
	_mav_put_int16_t(buf, 38, pitch_speed);
	_mav_put_int16_t(buf, 40, yaw_speed);
	_mav_put_uint16_t(buf, 42, water_speed);
	_mav_put_int16_t(buf, 44, vel);
	_mav_put_uint16_t(buf, 46, cog);
	_mav_put_int16_t(buf, 48, north_speed);
	_mav_put_int16_t(buf, 50, east_speed);
	_mav_put_int16_t(buf, 52, yaw_rate_global);
	_mav_put_int16_t(buf, 54, a_cmd);
	_mav_put_int16_t(buf, 56, aim_point_n);
	_mav_put_int16_t(buf, 58, aim_point_e);
	_mav_put_int16_t(buf, 60, commanded_rudder_angle);
	_mav_put_int16_t(buf, 62, commanded_throttle);
	_mav_put_int16_t(buf, 64, rudder_angle);
	_mav_put_int16_t(buf, 66, prop_speed);
	_mav_put_uint8_t(buf, 68, fix_type);
	_mav_put_uint8_t(buf, 69, reset);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_DATA, buf, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN, MAVLINK_MSG_ID_CONTROLLER_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_DATA, buf, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN);
#endif
#else
	mavlink_controller_data_t packet;
	packet.lat = lat;
	packet.lon = lon;
	packet.time_boot_ms = time_boot_ms;
	packet.north = north;
	packet.east = east;
	packet.last_wp_north = last_wp_north;
	packet.last_wp_east = last_wp_east;
	packet.next_wp_north = next_wp_north;
	packet.next_wp_east = next_wp_east;
	packet.w = w;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.roll_speed = roll_speed;
	packet.pitch_speed = pitch_speed;
	packet.yaw_speed = yaw_speed;
	packet.water_speed = water_speed;
	packet.vel = vel;
	packet.cog = cog;
	packet.north_speed = north_speed;
	packet.east_speed = east_speed;
	packet.yaw_rate_global = yaw_rate_global;
	packet.a_cmd = a_cmd;
	packet.aim_point_n = aim_point_n;
	packet.aim_point_e = aim_point_e;
	packet.commanded_rudder_angle = commanded_rudder_angle;
	packet.commanded_throttle = commanded_throttle;
	packet.rudder_angle = rudder_angle;
	packet.prop_speed = prop_speed;
	packet.fix_type = fix_type;
	packet.reset = reset;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_DATA, (const char *)&packet, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN, MAVLINK_MSG_ID_CONTROLLER_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_DATA, (const char *)&packet, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_CONTROLLER_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_controller_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t last_wp_north, int16_t last_wp_east, int16_t next_wp_north, int16_t next_wp_east, int16_t w, int16_t x, int16_t y, int16_t z, int16_t roll_speed, int16_t pitch_speed, int16_t yaw_speed, uint16_t water_speed, uint8_t fix_type, int32_t lat, int32_t lon, int16_t vel, uint16_t cog, uint8_t reset, uint32_t time_boot_ms, int32_t north, int32_t east, int16_t north_speed, int16_t east_speed, int16_t yaw_rate_global, int16_t a_cmd, int16_t aim_point_n, int16_t aim_point_e, int16_t commanded_rudder_angle, int16_t commanded_throttle, int16_t rudder_angle, int16_t prop_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int32_t(buf, 0, lat);
	_mav_put_int32_t(buf, 4, lon);
	_mav_put_uint32_t(buf, 8, time_boot_ms);
	_mav_put_int32_t(buf, 12, north);
	_mav_put_int32_t(buf, 16, east);
	_mav_put_int16_t(buf, 20, last_wp_north);
	_mav_put_int16_t(buf, 22, last_wp_east);
	_mav_put_int16_t(buf, 24, next_wp_north);
	_mav_put_int16_t(buf, 26, next_wp_east);
	_mav_put_int16_t(buf, 28, w);
	_mav_put_int16_t(buf, 30, x);
	_mav_put_int16_t(buf, 32, y);
	_mav_put_int16_t(buf, 34, z);
	_mav_put_int16_t(buf, 36, roll_speed);
	_mav_put_int16_t(buf, 38, pitch_speed);
	_mav_put_int16_t(buf, 40, yaw_speed);
	_mav_put_uint16_t(buf, 42, water_speed);
	_mav_put_int16_t(buf, 44, vel);
	_mav_put_uint16_t(buf, 46, cog);
	_mav_put_int16_t(buf, 48, north_speed);
	_mav_put_int16_t(buf, 50, east_speed);
	_mav_put_int16_t(buf, 52, yaw_rate_global);
	_mav_put_int16_t(buf, 54, a_cmd);
	_mav_put_int16_t(buf, 56, aim_point_n);
	_mav_put_int16_t(buf, 58, aim_point_e);
	_mav_put_int16_t(buf, 60, commanded_rudder_angle);
	_mav_put_int16_t(buf, 62, commanded_throttle);
	_mav_put_int16_t(buf, 64, rudder_angle);
	_mav_put_int16_t(buf, 66, prop_speed);
	_mav_put_uint8_t(buf, 68, fix_type);
	_mav_put_uint8_t(buf, 69, reset);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_DATA, buf, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN, MAVLINK_MSG_ID_CONTROLLER_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_DATA, buf, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN);
#endif
#else
	mavlink_controller_data_t *packet = (mavlink_controller_data_t *)msgbuf;
	packet->lat = lat;
	packet->lon = lon;
	packet->time_boot_ms = time_boot_ms;
	packet->north = north;
	packet->east = east;
	packet->last_wp_north = last_wp_north;
	packet->last_wp_east = last_wp_east;
	packet->next_wp_north = next_wp_north;
	packet->next_wp_east = next_wp_east;
	packet->w = w;
	packet->x = x;
	packet->y = y;
	packet->z = z;
	packet->roll_speed = roll_speed;
	packet->pitch_speed = pitch_speed;
	packet->yaw_speed = yaw_speed;
	packet->water_speed = water_speed;
	packet->vel = vel;
	packet->cog = cog;
	packet->north_speed = north_speed;
	packet->east_speed = east_speed;
	packet->yaw_rate_global = yaw_rate_global;
	packet->a_cmd = a_cmd;
	packet->aim_point_n = aim_point_n;
	packet->aim_point_e = aim_point_e;
	packet->commanded_rudder_angle = commanded_rudder_angle;
	packet->commanded_throttle = commanded_throttle;
	packet->rudder_angle = rudder_angle;
	packet->prop_speed = prop_speed;
	packet->fix_type = fix_type;
	packet->reset = reset;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_DATA, (const char *)packet, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN, MAVLINK_MSG_ID_CONTROLLER_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_DATA, (const char *)packet, MAVLINK_MSG_ID_CONTROLLER_DATA_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE CONTROLLER_DATA UNPACKING


/**
 * @brief Get field last_wp_north from controller_data message
 *
 * @return The north component of the local coordinates of the last waypoint (m * 10).
 */
static inline int16_t mavlink_msg_controller_data_get_last_wp_north(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field last_wp_east from controller_data message
 *
 * @return The east component of the local coordinates of the last waypoint (m * 10).
 */
static inline int16_t mavlink_msg_controller_data_get_last_wp_east(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field next_wp_north from controller_data message
 *
 * @return The north component of the local coordinates of the next waypoint (m * 10).
 */
static inline int16_t mavlink_msg_controller_data_get_next_wp_north(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field next_wp_east from controller_data message
 *
 * @return The east component of the local coordinates of the next waypoint (m * 10).
 */
static inline int16_t mavlink_msg_controller_data_get_next_wp_east(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field w from controller_data message
 *
 * @return Quaternion component 1, w (1 in null-rotation) (1e4)
 */
static inline int16_t mavlink_msg_controller_data_get_w(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field x from controller_data message
 *
 * @return Quaternion component 2, x (0 in null-rotation) (1e4)
 */
static inline int16_t mavlink_msg_controller_data_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field y from controller_data message
 *
 * @return Quaternion component 3, y (0 in null-rotation) (1e4)
 */
static inline int16_t mavlink_msg_controller_data_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field z from controller_data message
 *
 * @return Quaternion component 4, z (0 in null-rotation) (1e4)
 */
static inline int16_t mavlink_msg_controller_data_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field roll_speed from controller_data message
 *
 * @return Roll angular speed (rad/s * 1e4)
 */
static inline int16_t mavlink_msg_controller_data_get_roll_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field pitch_speed from controller_data message
 *
 * @return Pitch angular speed (rad/s * 1e4)
 */
static inline int16_t mavlink_msg_controller_data_get_pitch_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  38);
}

/**
 * @brief Get field yaw_speed from controller_data message
 *
 * @return Yaw angular speed (rad/s * 1e4)
 */
static inline int16_t mavlink_msg_controller_data_get_yaw_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field water_speed from controller_data message
 *
 * @return Forward water speed (m/s * 1e4).
 */
static inline uint16_t mavlink_msg_controller_data_get_water_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  42);
}

/**
 * @brief Get field fix_type from controller_data message
 *
 * @return 0: no fix, 1 valid fix (2D or better).
 */
static inline uint8_t mavlink_msg_controller_data_get_fix_type(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  68);
}

/**
 * @brief Get field lat from controller_data message
 *
 * @return Latitude (WGS84) (degrees * 1e7). If unknown, set to 0.
 */
static inline int32_t mavlink_msg_controller_data_get_lat(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field lon from controller_data message
 *
 * @return Longitude (WGS84) (degrees * 1e7). If unknown, set to 0.
 */
static inline int32_t mavlink_msg_controller_data_get_lon(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field vel from controller_data message
 *
 * @return GPS ground speed (m/s * 1e3). If unknown, set to 0.
 */
static inline int16_t mavlink_msg_controller_data_get_vel(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  44);
}

/**
 * @brief Get field cog from controller_data message
 *
 * @return Course over ground, from 0 to 2*pi (rad * 1e4). If unknown, set to 0.
 */
static inline uint16_t mavlink_msg_controller_data_get_cog(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  46);
}

/**
 * @brief Get field reset from controller_data message
 *
 * @return 0 indicates system is operating normally, 1 indicates it's held in reset.
 */
static inline uint8_t mavlink_msg_controller_data_get_reset(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  69);
}

/**
 * @brief Get field time_boot_ms from controller_data message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_controller_data_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field north from controller_data message
 *
 * @return North-component of vehicle position in the local tangent plane (m * 1e3)
 */
static inline int32_t mavlink_msg_controller_data_get_north(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field east from controller_data message
 *
 * @return East-component of vehicle position in the local tangent plane (m * 1e3)
 */
static inline int32_t mavlink_msg_controller_data_get_east(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field north_speed from controller_data message
 *
 * @return North-component of speed (m/s * 1e3)
 */
static inline int16_t mavlink_msg_controller_data_get_north_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  48);
}

/**
 * @brief Get field east_speed from controller_data message
 *
 * @return East-component of speed (m/s * 1e3)
 */
static inline int16_t mavlink_msg_controller_data_get_east_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  50);
}

/**
 * @brief Get field yaw_rate_global from controller_data message
 *
 * @return The yaw rate converted to the global frame (rad/s * 1e4)
 */
static inline int16_t mavlink_msg_controller_data_get_yaw_rate_global(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  52);
}

/**
 * @brief Get field a_cmd from controller_data message
 *
 * @return This is the lateral acceleration as commanded by the onboard L2+ controller (m/s^2 * 1e5)
 */
static inline int16_t mavlink_msg_controller_data_get_a_cmd(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  54);
}

/**
 * @brief Get field aim_point_n from controller_data message
 *
 * @return North-coordinate of the L2+ aim point (m * 10)
 */
static inline int16_t mavlink_msg_controller_data_get_aim_point_n(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  56);
}

/**
 * @brief Get field aim_point_e from controller_data message
 *
 * @return East-coordinate of the L2+ aim point (m * 10)
 */
static inline int16_t mavlink_msg_controller_data_get_aim_point_e(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  58);
}

/**
 * @brief Get field commanded_rudder_angle from controller_data message
 *
 * @return This is the rudder angle command as commanded by the onboard autonomous controller, positive indicates port-side (rad * 1e4)
 */
static inline int16_t mavlink_msg_controller_data_get_commanded_rudder_angle(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  60);
}

/**
 * @brief Get field commanded_throttle from controller_data message
 *
 * @return This is the throttle command as commanded by the onboard autonomous controller. It's in units of 1/1023*100% of max current and positive values propel the vehicle forward.
 */
static inline int16_t mavlink_msg_controller_data_get_commanded_throttle(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  62);
}

/**
 * @brief Get field rudder_angle from controller_data message
 *
 * @return The current rudder angle (rad * 1e4)
 */
static inline int16_t mavlink_msg_controller_data_get_rudder_angle(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  64);
}

/**
 * @brief Get field prop_speed from controller_data message
 *
 * @return Propeller speed, positive values mean the vessel will be propelled forward. (rpm * 100)
 */
static inline int16_t mavlink_msg_controller_data_get_prop_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  66);
}

/**
 * @brief Decode a controller_data message into a struct
 *
 * @param msg The message to decode
 * @param controller_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_controller_data_decode(const mavlink_message_t* msg, mavlink_controller_data_t* controller_data)
{
#if MAVLINK_NEED_BYTE_SWAP
	controller_data->lat = mavlink_msg_controller_data_get_lat(msg);
	controller_data->lon = mavlink_msg_controller_data_get_lon(msg);
	controller_data->time_boot_ms = mavlink_msg_controller_data_get_time_boot_ms(msg);
	controller_data->north = mavlink_msg_controller_data_get_north(msg);
	controller_data->east = mavlink_msg_controller_data_get_east(msg);
	controller_data->last_wp_north = mavlink_msg_controller_data_get_last_wp_north(msg);
	controller_data->last_wp_east = mavlink_msg_controller_data_get_last_wp_east(msg);
	controller_data->next_wp_north = mavlink_msg_controller_data_get_next_wp_north(msg);
	controller_data->next_wp_east = mavlink_msg_controller_data_get_next_wp_east(msg);
	controller_data->w = mavlink_msg_controller_data_get_w(msg);
	controller_data->x = mavlink_msg_controller_data_get_x(msg);
	controller_data->y = mavlink_msg_controller_data_get_y(msg);
	controller_data->z = mavlink_msg_controller_data_get_z(msg);
	controller_data->roll_speed = mavlink_msg_controller_data_get_roll_speed(msg);
	controller_data->pitch_speed = mavlink_msg_controller_data_get_pitch_speed(msg);
	controller_data->yaw_speed = mavlink_msg_controller_data_get_yaw_speed(msg);
	controller_data->water_speed = mavlink_msg_controller_data_get_water_speed(msg);
	controller_data->vel = mavlink_msg_controller_data_get_vel(msg);
	controller_data->cog = mavlink_msg_controller_data_get_cog(msg);
	controller_data->north_speed = mavlink_msg_controller_data_get_north_speed(msg);
	controller_data->east_speed = mavlink_msg_controller_data_get_east_speed(msg);
	controller_data->yaw_rate_global = mavlink_msg_controller_data_get_yaw_rate_global(msg);
	controller_data->a_cmd = mavlink_msg_controller_data_get_a_cmd(msg);
	controller_data->aim_point_n = mavlink_msg_controller_data_get_aim_point_n(msg);
	controller_data->aim_point_e = mavlink_msg_controller_data_get_aim_point_e(msg);
	controller_data->commanded_rudder_angle = mavlink_msg_controller_data_get_commanded_rudder_angle(msg);
	controller_data->commanded_throttle = mavlink_msg_controller_data_get_commanded_throttle(msg);
	controller_data->rudder_angle = mavlink_msg_controller_data_get_rudder_angle(msg);
	controller_data->prop_speed = mavlink_msg_controller_data_get_prop_speed(msg);
	controller_data->fix_type = mavlink_msg_controller_data_get_fix_type(msg);
	controller_data->reset = mavlink_msg_controller_data_get_reset(msg);
#else
	memcpy(controller_data, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_CONTROLLER_DATA_LEN);
#endif
}
