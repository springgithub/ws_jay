;; Auto-generated. Do not edit!


(when (boundp 'myx::IoTSensor)
  (if (not (find-package "MYX"))
    (make-package "MYX"))
  (shadow 'IoTSensor (find-package "MYX")))
(unless (find-package "MYX::IOTSENSOR")
  (make-package "MYX::IOTSENSOR"))

(in-package "ROS")
;;//! \htmlinclude IoTSensor.msg.html


(defclass myx::IoTSensor
  :super ros::object
  :slots (_id _name _temp _humitidy ))

(defmethod myx::IoTSensor
  (:init
   (&key
    ((:id __id) 0)
    ((:name __name) "")
    ((:temp __temp) 0.0)
    ((:humitidy __humitidy) 0.0)
    )
   (send-super :init)
   (setq _id (round __id))
   (setq _name (string __name))
   (setq _temp (float __temp))
   (setq _humitidy (float __humitidy))
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:temp
   (&optional __temp)
   (if __temp (setq _temp __temp)) _temp)
  (:humitidy
   (&optional __humitidy)
   (if __humitidy (setq _humitidy __humitidy)) _humitidy)
  (:serialization-length
   ()
   (+
    ;; int32 _id
    4
    ;; string _name
    4 (length _name)
    ;; float32 _temp
    4
    ;; float32 _humitidy
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _id
       (write-long _id s)
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; float32 _temp
       (sys::poke _temp (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _humitidy
       (sys::poke _humitidy (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _id
     (setq _id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float32 _temp
     (setq _temp (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _humitidy
     (setq _humitidy (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get myx::IoTSensor :md5sum-) "cd6a2d931f3e08a1ac57aead0de6b077")
(setf (get myx::IoTSensor :datatype-) "myx/IoTSensor")
(setf (get myx::IoTSensor :definition-)
      "int32 id
string name
float32 temp
float32 humitidy


")



(provide :myx/IoTSensor "cd6a2d931f3e08a1ac57aead0de6b077")


