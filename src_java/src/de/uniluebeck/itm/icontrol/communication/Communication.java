/* ----------------------------------------------------------------------
 * This file is part of the WISEBED project.
 * Copyright (C) 2009 by the Institute of Telematics, University of Luebeck
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the BSD License. Refer to bsd-licence.txt
 * file in the root of the source tree for further details.
 ------------------------------------------------------------------------*/
package de.uniluebeck.itm.icontrol.communication;

import ishell.device.MessagePacket;
import de.uniluebeck.itm.icontrol.communication.listener.FeatureListener;
import de.uniluebeck.itm.icontrol.communication.listener.MessageListener;

/**
 * @class Communication
 * @author Moehlmann, Schneider, Witt
 * @brief Interface for the communication with the robots 
 * @detailed This interface defines methods for sending messages from the gui
 * 			 to the robots and receiving messages from the robots. It also 
 * 			 defines methods for adding and removing listeners.
 */
public interface Communication {

	/**
	 * Sends a broadcast message to all robots to request the features of
	 * the robots. This call should be made at the start of the gui.
	 */
	public void showMeWhatYouGot();

	/**
	 * Sends a message about a task that should be performed. The message is
	 * can be addressed to a specific robot or to all robots (broadcast 
	 * message).
	 * 
	 * @param robotId
	 *            The ID of the robot, which is supposed to receive the message
	 *            (integer value must not be higher than 2 bytes)
	 * @param taskName
	 *            The name of the task, which should be proceeded
	 * @param paramLength
	 *            Amount of values in the parameters array (integer value must
	 *            not be higher than 2 bytes)
	 * @param parameters
	 *            The values of the parameters (integer values must not be higher
	 *            than 2 bytes)
	 */
	public void doTask(int robotId, String taskName, int paramLength,
			int[] parameters);

	/**
	 * Adds a <code>MessageListener</code> object to the set of message
	 * listeners. The added listener will be notified every time a message
	 * arrives.
	 * 
	 * @param listener
	 * 			  The <code>MessageListener</code> object
	 */
	public void addMessageListener(MessageListener listener);

	/**
	 * Adds a <code>FeatureListener</code> object to the set of feature
	 * listeners. The listener will be notified every time a feature message
	 * arrives.
	 * 
	 * @param listener
	 * 			  The <code>FeatureListener</code> object
	 */
	public void addFeatureListener(FeatureListener listener);

	/**
	 * Removes the given <code>FeatureListener</code> object from the feature
	 * listener set.
	 * 
	 * @param listener
	 * 			  The <code>FeatureListener</code> object
	 */
	public void removeFeatureListener(FeatureListener listener);

	/**
	 * Removes the given <code>MessageListener</code> object from the message
	 * listener set.
	 * 
	 * @param listener
	 * 			  The <code>MessageListener</code> object
	 */
	public void removeMessageListener(MessageListener listener);

	/**
	 * This method should be called every time a message will be received.
	 * It checks the type of the message (encoded in the first byte of the 
	 * message) and calls the according methods.
	 * 
	 * @param message
	 *            The message, which was received
	 */
	public void receive(MessagePacket packet);

}
