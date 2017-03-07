# Desc: Device definitions for ant robots. Modification of original stage pioneer.inc
# Author: Rakesh
# Date: 2016-09-16

define pioneer_base position 
(
  color "green"			# Default color.
  drive "diff"		 	# Differential steering model.
  gui_nose 1                  	# Draw a nose on the robot so we can see which way it points
  obstacle_return 0           	# Can hit things.
  ranger_return 0           	# reflects sonar beams
  blob_return 0               	# Seen by blobfinders  
  fiducial_return 0           	# Seen as "1" fiducial finders
  gripper_return 0

  localization "gps"         	  
  localization_origin [0 0 0 0] 	# Start odometry at (0, 0, 0).

  # alternative odometric localization with simple error model
  # localization "odom"         		# Change to "gps" to have impossibly perfect, global odometry
  #  odom_error [ 0.05 0.05 0.1 ]   	# Odometry error or slip in X, Y and Theta
                                   	# (Uniform random distribution)   

  # four DOF kinematics limits
  # [ xmin xmax ymin ymax zmin zmax amin amax ]				
  velocity_bounds [-0.5 0.5 0 0 0 0 -90.0 90.0 ]					
  acceleration_bounds [-0.5 0.5 0 0 0 0 -90 90.0 ]
)



define pioneer2dx_base_no_sonar pioneer_base
(
  # actual size
  size [0.44 0.38 0.22] # sizes from MobileRobots' web site

  # the pioneer's center of rotation is offset from its center of area
  origin [-0.04 0 0 0]

  # draw a nose on the robot so we can see which way it points
  gui_nose 1

  # estimated mass in KG
  mass 23.0 
  # differential steering model
  drive "diff"

  obstacle_return 0             # Can hit things.
  ranger_return 0             # reflects sonar beams
  blob_return 0                 # Seen by blobfinders  
  fiducial_return 0             # Seen as "1" fiducial finders
  gripper_return 0
 )


define pioneer2dx_base pioneer2dx_base_no_sonar
(
  # use the sonar array defined above with a small vertical offset to
  # drop the sensors into the robot body

  obstacle_return 0             # Can hit things.
  ranger_return 0             # reflects sonar beams
  blob_return 0                 # Seen by blobfinders  
  fiducial_return 0             # Seen as "1" fiducial finders
  gripper_return 0
  
)

define pioneer2dx_base_front_sonar pioneer2dx_base_no_sonar
(
  # use the sonar array defined above with a small vertical offset to
  # drop the sensors into the robot body

  obstacle_return 0             # Can hit things.
  ranger_return 0             # reflects sonar beams
  blob_return 0                 # Seen by blobfinders  
  fiducial_return 0             # Seen as "1" fiducial finders
  gripper_return 0
  
)


define pioneer2dx pioneer2dx_base
(  
  # simplified Body shape:
  block( 
    points 8
    point[0] [-0.2 0.12]
    point[1] [-0.2 -0.12]
    point[2] [-0.12 -0.2555 ]

    point[3] [0.12 -0.2555]
    point[4] [0.2 -0.12]
    point[5] [0.2 0.12]
    point[6] [0.12 0.2555]
    point[7] [-0.12 0.2555]
    z [0 0.22]
  )

  obstacle_return 0             # Can hit things.
  ranger_return 0             # reflects sonar beams
  blob_return 0                 # Seen by blobfinders  
  fiducial_return 0             # Seen as "1" fiducial finders
  gripper_return 0
)

# as above, but with front sonar only
define pioneer2dx_front_sonar pioneer2dx_base_front_sonar
(  
  # simplified Body shape:
  block( 
    points 8
    point[0] [-0.2 0.12]
    point[1] [-0.2 -0.12]
    point[2] [-0.12 -0.2555]
    point[3] [0.12 -0.2555]
    point[4] [0.2 -0.12]
    point[5] [0.2 0.12]
    point[6] [0.12 0.2555]
    point[7] [-0.12 0.2555]
    z [0 0.22]
  )

  obstacle_return 0             # Can hit things.
  ranger_return 0             # reflects sonar beams
  blob_return 0                 # Seen by blobfinders  
  fiducial_return 0             # Seen as "1" fiducial finders
  gripper_return 0
)





# The Pioneer3DX standard configuration
define pioneer3dx pioneer_base
(
  # Actual size
  size [0.511 0.4 0.22 ]

  # The pioneer's center of rotation is offset from its center of area
  origin [-0.04465 0.0 0.0]

  # Estimated mass in KG
  mass 23.0 

  # Body shape:
  block( 
    points 8
    point[0] [-0.2 0.12]
    point[1] [-0.2 -0.12]
    point[2] [-0.12 -0.2555]
    point[3] [0.12 -0.2555]
    point[4] [0.2 -0.12]
    point[5] [0.2 0.12]
    point[6] [0.12 0.2555]
    point[7] [-0.12 0.2555]
    z [0 0.22]
  )

  obstacle_return 0             # Can hit things.
  ranger_return 0             # reflects sonar beams
  blob_return 0                 # Seen by blobfinders  
  fiducial_return 0             # Seen as "1" fiducial finders
  gripper_return 0

) 
