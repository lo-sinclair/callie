<?php
$entity = entity_get_controller('callie_form')->create();

$entity->title = 'demo';
$entity->field_form_fields = Array(
	'und'=>Array(
		0 => Array(
			'label'=>"FIO",
			'type'=>'text',
			'required'=>1
		),
		1 => Array(
			'label'=>'Phone',
			'type'=>'phone',
			'required'=>1 
		),
		2 => Array(
			'label'=>'Message',
			'type'=>'textarea',
			'required'=>0
		)
	)
);

entity_get_controller('callie_form')->save($entity);

