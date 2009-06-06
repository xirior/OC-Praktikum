package de.uniluebeck.itm.icontrol.communication;

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
