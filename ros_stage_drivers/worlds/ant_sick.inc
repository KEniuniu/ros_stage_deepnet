
define sicksensor sensor
(				
  # factory settings for LMS200	
  range [ 0.0 8.0 ]
  pose [ 0 0 0.1 0 ]
  fov 180
  samples 180
  #samples 90 # still useful but much faster to compute
  color_rgba [0 0 1 0.15]

)

define sickcommon ranger
(
  color "blue"
  size [ 0.001 0.001 0.001 ] # dimensions from LMS200 data sheet	

  obstacle_return 0             # Can hit things.
  ranger_return 0             # reflects sonar beams
  blob_return 0                 # Seen by blobfinders  
  fiducial_return 0             # Seen as "1" fiducial finders
  gripper_return 0
 )

define sickbase sickcommon
(
block( points 4
       point[0] [0 0]
       point[1] [0 .001]
       point[2] [.001 .001]
       point[3] [.001 0]
       z [0 0.0021]
      )

obstacle_return 0             # Can hit things.
ranger_return 0             # reflects sonar beams
blob_return 0                 # Seen by blobfinders  
fiducial_return 0             # Seen as "1" fiducial finders
gripper_return 0
)

define sicklaser sickbase ( 
  sicksensor() 
  obstacle_return 0             # Can hit things.
  ranger_return 0             # reflects sonar beams
  blob_return 0                 # Seen by blobfinders  
  fiducial_return 0             # Seen as "1" fiducial finders
  gripper_return 0
)


