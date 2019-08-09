#pragma once

#define USE_HARDCODED_BAKED_SDF 0

#define USE_SPECIAL_SDF_MESH_LOADER_FUNCTION 1

#define USE_COMPLETE_BAKING_SYSTEM 1
#define DO_THE_BAKING_PORT 1


#define ENABLE_SDF_MESH_GENERATION 1

//#define SDF_VOLUME_TEXTURE_ATLAS_DEPTH 1024

#define SDF_VOLUME_TEXTURE_ATLAS_WIDTH 512
#define SDF_VOLUME_TEXTURE_ATLAS_HEIGHT 512
#define SDF_VOLUME_TEXTURE_ATLAS_DEPTH 1024


#define SDF_MAX_OBJECT_COUNT 256

//#define SDF_MAX_VOXEL_ONE_DIMENSION 64
//#define SDF_MIN_VOXEL_ONE_DIMENSION 64


#define SDF_DOUBLE_MAX_VOXEL_ONE_DIMENSION_X 128
#define SDF_DOUBLE_MAX_VOXEL_ONE_DIMENSION_Y 128
#define SDF_DOUBLE_MAX_VOXEL_ONE_DIMENSION_Z 128


#define SDF_MAX_VOXEL_ONE_DIMENSION_X 96
#define SDF_MAX_VOXEL_ONE_DIMENSION_Y 96
#define SDF_MAX_VOXEL_ONE_DIMENSION_Z 96


#define SDF_MIN_VOXEL_ONE_DIMENSION_X 96
#define SDF_MIN_VOXEL_ONE_DIMENSION_Y 96
#define SDF_MIN_VOXEL_ONE_DIMENSION_Z 96

#define SDF_STRATIFIED_DIRECTIONS_NUM 600



#define UPDATE_SDF_DATA_BUFFER_SIZE (SDF_MAX_VOXEL_ONE_DIMENSION_X * SDF_MAX_VOXEL_ONE_DIMENSION_Y * SDF_MAX_VOXEL_ONE_DIMENSION_Z)



//Approximation margin added to SDF bounding box
#define SDF_APPROX_MARGIN 0.9

#define SDF_MESH_VISUALIZATION_THREAD_X 8
#define SDF_MESH_VISUALIZATION_THREAD_Y 8

#define SDF_MESH_SHADOW_THREAD_X 8
#define SDF_MESH_SHADOW_THREAD_Y 8


#define ENABLE_SDF_SHADOW_DOWNSAMPLE 1

#if ENABLE_SDF_SHADOW_DOWNSAMPLE
#define SDF_SHADOW_DOWNSAMPLE_VALUE 2
#else
#define SDF_SHADOW_DOWNSAMPLE_VALUE 1
#endif


#define SDF_LIGHT_THERESHOLD_VAL 10000
