#ifndef SRC_RSLIDAR_POINT_H
#define SRC_RSLIDAR_POINT_H
#include <pcl/io/io.h>
#include <pcl/point_types.h>

struct RslidarPoint {
  PCL_ADD_POINT4D;     // quad-word XYZ
  uint8_t intensity;
  uint16_t ring = 0;
  double timestamp = 0;
  EIGEN_MAKE_ALIGNED_OPERATOR_NEW  // ensure proper alignment
} EIGEN_ALIGN16;

POINT_CLOUD_REGISTER_POINT_STRUCT(RslidarPoint,
  (float, x, x)(float, y, y)(float, z, z)
  (uint8_t, intensity, intensity)
  (uint16_t, ring, ring)
  (double, timestamp, timestamp));

#endif //SRC_RSLIDAR_POINT_H
