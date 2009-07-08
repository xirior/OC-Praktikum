package de.uniluebeck.itm.icontrol.communication;

/* ----------------------------------------------------------------------
 * This file is part of the WISEBED project.
 * Copyright (C) 2009 by the Institute of Telematics, University of Luebeck
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the BSD License. Refer to bsd-licence.txt
 * file in the root of the source tree for further details.
 ------------------------------------------------------------------------*/

import ishell.device.MessagePacket;
import de.uniluebeck.itm.icontrol.communication.listener.FeatureListener;
import de.uniluebeck.itm.icontrol.communication.listener.MessageListener;

public interface Communication {

	public void showMeWhatYouGot();

	public void doTask(int robotId, String taskName, int paramLength, int[] parameters);

	public void addMessageListener(MessageListener listener);

	public void addFeatureListener(FeatureListener listener);

	public void removeFeatureListener(FeatureListener listener);

	public void removeMessageListener(MessageListener listener);

	public void receive(MessagePacket packet);

}
