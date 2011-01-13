<?php

function query_param_filter_admin_settings() {
	$form = array();
	
	$form['query_param_filter_paths'] = array(
	 '#type' => 'textarea',
	 '#title' => t('Paths'),
	 '#description' => t('Choose which paths should be protected. One per line. Use * as wildcard.'),
	 '#default_value' => variable_get('query_param_filter_paths', ''),
	);
	
	return system_settings_form($form);
}