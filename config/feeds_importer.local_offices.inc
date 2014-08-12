<?php
/**
 * @file
 * feeds_importer.local_offices.inc
 */

$api = '2.0.0';

$data = $feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'local_offices';
$feeds_importer->config = array(
  'name' => 'Local Offices',
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
      'sources' => array(),
      'rawXML' => array(),
      'context' => '',
      'exp' => array(
        'errors' => FALSE,
        'tidy' => FALSE,
        'debug' => array(),
        'tidy_encoding' => 'UTF8',
      ),
      'allow_override' => TRUE,
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsNodeProcessor',
    'config' => array(
      'expire' => '-1',
      'author' => '79',
      'authorize' => 1,
      'mappings' => array(
        0 => array(
          'source' => 'xpathparser:0',
          'target' => 'guid',
          'unique' => 1,
        ),
        1 => array(
          'source' => 'xpathparser:2',
          'target' => 'body',
          'unique' => FALSE,
        ),
        2 => array(
          'source' => 'xpathparser:3',
          'target' => 'field_url:url',
          'unique' => FALSE,
        ),
        3 => array(
          'source' => 'xpathparser:4',
          'target' => 'field_pubdate:start',
          'unique' => FALSE,
        ),
        4 => array(
          'source' => 'xpathparser:5',
          'target' => 'title',
          'unique' => FALSE,
        ),
        5 => array(
          'source' => 'xpathparser:6',
          'target' => 'field_facebook:url',
          'unique' => FALSE,
        ),
        6 => array(
          'source' => 'xpathparser:7',
          'target' => 'field_twitter:url',
          'unique' => FALSE,
        ),
        7 => array(
          'source' => 'xpathparser:8',
          'target' => 'field_flickr:url',
          'unique' => FALSE,
        ),
        8 => array(
          'source' => 'xpathparser:9',
          'target' => 'field_youtube:url',
          'unique' => FALSE,
        ),
        9 => array(
          'source' => 'xpathparser:10',
          'target' => 'field_authornameemail',
          'unique' => FALSE,
        ),
      ),
      'update_existing' => '2',
      'input_format' => 'full_html',
      'skip_hash_check' => 0,
      'bundle' => 'local_offices',
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
