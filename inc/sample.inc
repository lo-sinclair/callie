<?php
$entity = entity_get_controller('callie_form')->create();
$entity->type = 'callie_form';
$entity->title = 'Order a free call';
$entity->submit_btn_text = 'Submit';
$entity->open_btn_text = 'Call me';
$entity->field_form_fields = Array(
	'und'=>Array(
		0 => Array(
			'name'=>'name',
			'label'=>"FIO",
			'type'=>'cftext',
			'required'=>1
		),
		1 => Array(
			'name'=>'phone',
			'label'=>'Phone',
			'type'=>'cfphone',
			'required'=>1 
		),
		2 => Array(
			'name'=>'message',
			'label'=>'Message',
			'type'=>'cftextarea',
			'required'=>0
		)
	)
);


entity_get_controller('callie_form')->save($entity);

