<?php
/**
 * @file
 * feeds_tamper.chronicle_outreach_xpathparser_6_find_replace_regex.inc
 */

$api = '2.0.0';

$data = $feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'chronicle_outreach-xpathparser_6-find_replace_regex';
$feeds_tamper->importer = 'chronicle_outreach';
$feeds_tamper->source = 'xpathparser:6';
$feeds_tamper->plugin_id = 'find_replace_regex';
$feeds_tamper->settings = array(
  'find' => '/\\?itok=(.+)$/',
  'replace' => '',
  'limit' => '',
  'real_limit' => -1,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Find replace REGEX';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'feeds_tamper',
);
