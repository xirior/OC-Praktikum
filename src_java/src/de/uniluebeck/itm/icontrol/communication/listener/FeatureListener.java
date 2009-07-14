/* ----------------------------------------------------------------------
 * This file is part of the WISEBED project.
 * Copyright (C) 2009 by the Institute of Telematics, University of Luebeck
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the BSD License. Refer to bsd-licence.txt
 * file in the root of the source tree for further details.
 ------------------------------------------------------------------------*/
package de.uniluebeck.itm.icontrol.communication.listener;

/**
 * @class FeatureListener
 * @author Moehlmann, Schneider, Witt
 * @brief Listener interface for feature messages
 * @detailed This interface defines an onAction method for feature messages
 */
public interface FeatureListener {
	
	/**
	 * Method that should be called each time a new feature message arrives.
	 * 
	 * @param robotId
	 * 			The robot id
	 * @param taskListLength
	 * 			The length of the task list
	 * @param taskList
	 * 			The list with all tasks
	 * @param paramListLength
	 * 			The length of the parameter list
	 * @param paramList
	 * 			The parameter list. It contains a 2d-array with
	 * 			all parameters for every tasks in the task list
	 * @param sensorLength
	 * 			The length of the sensor list
	 * @param sensors
	 * 			A list of all sensors a robot has
	 * @param sensorRange
	 * 			The range of the values of the sensors (min and max value)
	 */
	public void onAction(int robotId, int taskListLength, String[] taskList, int[] paramListLength, String[][] paramList, int sensorLength, String[] sensors, int[] sensorRange);
}
