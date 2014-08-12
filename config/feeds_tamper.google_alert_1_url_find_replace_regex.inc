<?php
/**
 * @file
 * feeds_tamper.google_alert_1_url_find_replace_regex.inc
 */

$api = '2.0.0';

$data = $feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'google_alert_1-url-find_replace_regex';
$feeds_tamper->importer = 'google_alert_1';
$feeds_tamper->source = 'url';
$feeds_tamper->plugin_id = 'find_replace_regex';
$feeds_tamper->settings = array(
  'find' => '/[\\s\\S].*&url=/',
  'replace' => '',
  'limit' => '',
  'real_limit' => -1,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Beginning of String';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'feeds_tamper',
);
