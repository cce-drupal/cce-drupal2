<?php
/**
 * @file
 * feeds_importer.emphases_taxonomy_2.inc
 */

$api = '2.0.0';

$data = $feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'emphases_taxonomy_2';
$feeds_importer->config = array(
  'name' => 'Emphases - Taxonomy',
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
    'plugin_key' => 'FeedsXPathParserXML',
    'config' => array(
      'sources' => NULL,
      'rawXML' => array(),
      'context' => '',
      'exp' => array(
        'errors' => FALSE,
        'tidy' => FALSE,
        'debug' => array(),
        'tidy_encoding' => 'UTF8',
      ),
      'allow_override' => 1,
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsTermProcessor',
    'config' => array(
      'vocabulary' => 0,
      'mappings' => array(
        0 => array(
          'source' => 'xpathparser:0',
          'target' => 'guid',
          'unique' => 1,
        ),
        1 => array(
          'source' => 'xpathparser:1',
          'target' => 'name',
          'unique' => FALSE,
        ),
        2 => array(
          'source' => 'xpathparser:2',
          'target' => 'description',
          'unique' => FALSE,
        ),
        3 => array(
          'source' => 'xpathparser:3',
          'target' => 'parent',
          'unique' => FALSE,
        ),
      ),
      'update_existing' => '2',
      'input_format' => 'full_html',
      'skip_hash_check' => 0,
      'bundle' => 'program_areas_with_emphases',
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
