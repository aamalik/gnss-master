# SBAS ephemeris type

int32 sat                       # satellite number
time t0                         # reference epoch time (GPST)
time tof                        # time of message frame (GPST)
int32 sva                       # SV accuracy (URA index)
int32 svh                       # SV health (0:ok)

geometry_msgs/Vector3 pos       # satellite position (m) (ecef)
geometry_msgs/Vector3 vel       # satellite velocity (m/s) (ecef)
geometry_msgs/Vector3 acc       # satellite acceleration (m/s^2) (ecef)
float64 af0                     # satellite clock-offset (s,s/s)
float64 af1                     # satellite drift (s,s/s)