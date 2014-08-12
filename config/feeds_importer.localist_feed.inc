<?php
/**
 * @file
 * feeds_importer.localist_feed.inc
 */

$api = '2.0.0';

$data = $feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'localist_feed';
$feeds_importer->config = array(
  'name' => 'Localist iCal Feed',
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
    'plugin_key' => 'DateiCalFeedsParser',
    'config' => array(
      'indefinite_count' => '52',
      'until_not_utc' => 0,
      'skip_days' => NULL,
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsNodeProcessor',
    'config' => array(
      'expire' => '-1',
      'author' => '78',
      'authorize' => 1,
      'mappings' => array(
        0 => array(
          'source' => 'DTSTART',
          'target' => 'field_startdate:start',
          'unique' => FALSE,
        ),
        1 => array(
          'source' => 'DTEND',
          'target' => 'field_startdate:end',
          'unique' => FALSE,
        ),
        2 => array(
          'source' => 'SUMMARY',
          'target' => 'title',
          'unique' => FALSE,
        ),
        3 => array(
          'source' => 'DESCRIPTION',
          'target' => 'body',
          'unique' => FALSE,
        ),
        4 => array(
          'source' => 'UID',
          'target' => 'guid',
          'unique' => 1,
        ),
        5 => array(
          'source' => 'LOCATION',
          'target' => 'field_location',
          'unique' => FALSE,
        ),
        6 => array(
          'source' => 'URL',
          'target' => 'field_url:url',
          'unique' => FALSE,
        ),
      ),
      'update_existing' => '2',
      'input_format' => 'full_html',
      'skip_hash_check' => 0,
      'bundle' => 'event',
    ),
  ),
  'content_type' => '',
  'update' => 0,
  'import_period' => '1800',
  'expire_period' => 3600,
  'import_on_create' => 1,
  'process_in_background' => 0,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'feeds',
);
