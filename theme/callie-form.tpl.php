
<form role="form" id="callie-form-<?php print $cfid;?>" class="callie-form <?php print $mode;?>" method="post" action="">
    <h3 class="subject"><?php print $title?></h3>

    <?php foreach ($form_fields as $field_name=>$field): ?>
    	<div class="callie-field field-<?php print $field_name;?>">
    		<?php print render($field);?>
    	</div>
    <?php endforeach; ?>

    <!-- Submit Button -->
    <div>
        <button type="submit" class="btn-submit">$submit_btn_text;</button>
    </div>

    
</form><!-- /form -->