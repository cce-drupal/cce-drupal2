<?php
/**
 * @file
 * feeds_tamper.google_alert_2_url_end_of_string2.inc
 */

$api = '2.0.0';

$data = $feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'google_alert_2-url-end_of_string2';
$feeds_tamper->importer = 'google_alert_2';
$feeds_tamper->source = 'url';
$feeds_tamper->plugin_id = 'find_replace_regex';
$feeds_tamper->settings = array(
  'find' => '/&ct=[\\s\\S].*/',
  'replace' => '',
  'limit' => '',
  'real_limit' => -1,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'End of String';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'feeds_tamper',
);
