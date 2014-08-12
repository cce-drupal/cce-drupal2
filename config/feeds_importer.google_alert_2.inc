<?php
/**
 * @file
 * feeds_importer.google_alert_2.inc
 */

$api = '2.0.0';

$data = $feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'google_alert_2';
$feeds_importer->config = array(
  'name' => 'Google Alert 2',
  'description' => '',
  'fetcher' => array(
    'plugin_key' => 'FeedsHTTPFetcher',
    'config' => array(
      'auto_detect_feeds' => FALSE,
      'use_pubsubhubbub' => FALSE,
      'designated_hub' => '',
      'request_timeout' => NULL,
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsSyndicationParser',
    'config' => array(),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsNodeProcessor',
    'config' => array(
      'expire' => '-1',
      'author' => '77',
      'authorize' => 1,
      'mappings' => array(
        0 => array(
          'source' => 'title',
          'target' => 'title',
          'unique' => FALSE,
        ),
        1 => array(
          'source' => 'guid',
          'target' => 'guid',
          'unique' => 1,
        ),
        2 => array(
          'source' => 'url',
          'target' => 'field_url:url',
          'unique' => FALSE,
        ),
        3 => array(
          'source' => 'description',
          'target' => 'body',
          'unique' => FALSE,
        ),
        4 => array(
          'source' => 'timestamp',
          'target' => 'field_pubdate:start',
          'unique' => FALSE,
        ),
      ),
      'update_existing' => '2',
      'input_format' => 'full_html',
      'skip_hash_check' => 0,
      'bundle' => 'news',
    ),
  ),
  'content_type' => '',
  'update' => 0,
  'import_period' => 1800,
  'expire_period' => 3600,
  'import_on_create' => TRUE,
  'process_in_background' => FALSE,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'feeds',
);
