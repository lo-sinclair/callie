<?php

/**
 * @file
 */
?>

<span class="callie-field-item-label"><?php print $label; ?></span>
<span class="callie-field-item-type"><?php print $type; ?></span>
<?php if (!empty($required)): ?>
  <span class="callie-field-item-required">(<?php print $required; ?>)</span>
<?php endif; ?>
