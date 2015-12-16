tensionEffect(messageXPos, meanXPos) {
  // if MEAN and MESSAGE texts
  // are close each other,
  if (abs(meanTextX - messageTextX
      < messageText.getWidth()) {
    // decrease the speed
    greenTextSpeed+=[[greenTextSpeed]]/6;
    redTextSpeed+=[[redTextSpeed]]/6;
    purpleTextSpeed+=[[purpleTextSpeed]]/6;
  } else {
    greenTextSpeed+=[[greenTextSpeed]];
    redTextSpeed+=[[redTextSpeed]];
    purpleTextSpeed+=[[purpleTextSpeed]];
  }
}
