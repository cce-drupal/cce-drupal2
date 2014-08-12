<?php
/**
 * @file
 * feeds_tamper.google_alert_1_title_strip_tags.inc
 */

$api = '2.0.0';

$data = $feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'google_alert_1-title-strip_tags';
$feeds_tamper->importer = 'google_alert_1';
$feeds_tamper->source = 'title';
$feeds_tamper->plugin_id = 'strip_tags';
$feeds_tamper->settings = array(
  'allowed_tags' => '',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Strip tags';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'feeds_tamper',
);
