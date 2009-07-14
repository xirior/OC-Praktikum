/* ----------------------------------------------------------------------
 * This file is part of the WISEBED project.
 * Copyright (C) 2009 by the Institute of Telematics, University of Luebeck
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the BSD License. Refer to bsd-licence.txt
 * file in the root of the source tree for further details.
 ------------------------------------------------------------------------*/
package de.uniluebeck.itm.icontrol.communication.listener;

/**
 * @class MessageListener
 * @author Moehlmann, Schneider, Witt
 * @brief Listener interface for messages
 * @detailed This interface defines an onMessage method for messages
 */
public interface MessageListener {
	
	/**
	 * This method should be called every time a new message arrives.
	 * 
	 * @param robotId
	 * 			The robot id
	 * @param taskName
	 * 			The task name
	 * @param valueLength
	 * 			The length of the value list
	 * @param values
	 * 			A list with the parameter values
	 */
	void onMessage(int robotId, String taskName, int valueLength, int[] values);
}
