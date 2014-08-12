<?php
/**
 * @file
 * views_view.news_blocks.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'news_blocks';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'News Blocks';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'All News';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'mini';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Field: Content: URL */
$handler->display->display_options['fields']['field_url']['id'] = 'field_url';
$handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
$handler->display->display_options['fields']['field_url']['field'] = 'field_url';
$handler->display->display_options['fields']['field_url']['label'] = '';
$handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
/* Field: Content: Published Title */
$handler->display->display_options['fields']['field_published_title']['id'] = 'field_published_title';
$handler->display->display_options['fields']['field_published_title']['table'] = 'field_data_field_published_title';
$handler->display->display_options['fields']['field_published_title']['field'] = 'field_published_title';
$handler->display->display_options['fields']['field_published_title']['label'] = '';
$handler->display->display_options['fields']['field_published_title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_published_title']['alter']['path'] = '[field_url]';
$handler->display->display_options['fields']['field_published_title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_published_title']['element_default_classes'] = FALSE;
/* Field: Content: Published Description */
$handler->display->display_options['fields']['field_publishbody']['id'] = 'field_publishbody';
$handler->display->display_options['fields']['field_publishbody']['table'] = 'field_data_field_publishbody';
$handler->display->display_options['fields']['field_publishbody']['field'] = 'field_publishbody';
$handler->display->display_options['fields']['field_publishbody']['label'] = '';
$handler->display->display_options['fields']['field_publishbody']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_publishbody']['element_default_classes'] = FALSE;
/* Sort criterion: Content: PubDate (field_pubdate) */
$handler->display->display_options['sorts']['field_pubdate_value']['id'] = 'field_pubdate_value';
$handler->display->display_options['sorts']['field_pubdate_value']['table'] = 'field_data_field_pubdate';
$handler->display->display_options['sorts']['field_pubdate_value']['field'] = 'field_pubdate_value';
$handler->display->display_options['sorts']['field_pubdate_value']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'news' => 'news',
);

/* Display: All News */
$handler = $view->new_display('block', 'All News', 'block');
$handler->display->display_options['display_description'] = 'News from all emphases; shows top 5 recent.';
$handler->display->display_options['block_description'] = 'All News';

/* Display: Program Area News */
$handler = $view->new_display('block', 'Program Area News', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Program Area News';
$handler->display->display_options['display_description'] = 'News from individual program areas; shows top 5 recent.';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['label'] = 'progarea';
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
  'program_areas' => 'program_areas',
  'counties' => 0,
  'program_areas_with_emphases' => 0,
  'tags' => 0,
);
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: ShortName (field_shortname) */
$handler->display->display_options['arguments']['field_shortname_value']['id'] = 'field_shortname_value';
$handler->display->display_options['arguments']['field_shortname_value']['table'] = 'field_data_field_shortname';
$handler->display->display_options['arguments']['field_shortname_value']['field'] = 'field_shortname_value';
$handler->display->display_options['arguments']['field_shortname_value']['relationship'] = 'term_node_tid';
$handler->display->display_options['arguments']['field_shortname_value']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_shortname_value']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_shortname_value']['title'] = 'News';
$handler->display->display_options['arguments']['field_shortname_value']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['field_shortname_value']['default_argument_options']['index'] = '1';
$handler->display->display_options['arguments']['field_shortname_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_shortname_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_shortname_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_shortname_value']['limit'] = '0';
$handler->display->display_options['block_description'] = 'Program Area News';

/* Display: Association and Team News */
$handler = $view->new_display('block', 'Association and Team News', 'block_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Association and Team News';
$handler->display->display_options['display_description'] = 'News from individual Associations and Area Teams; shows top 5 recent.';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['label'] = 'county';
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
  'counties' => 'counties',
  'program_areas' => 0,
  'program_areas_with_emphases' => 0,
  'tags' => 0,
);
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
$handler->display->display_options['arguments']['name']['default_action'] = 'default';
$handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['title'] = 'News';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '1';
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['block_description'] = 'Association and Team News';

/* Display: Regional News */
$handler = $view->new_display('block', 'Regional News', 'block_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Regional News';
$handler->display->display_options['display_description'] = 'News from individual Regions; shows top 5 recent.';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['label'] = 'county';
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
  'counties' => 'counties',
  'program_areas' => 0,
  'program_areas_with_emphases' => 0,
  'tags' => 0,
);
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: URL */
$handler->display->display_options['fields']['field_url']['id'] = 'field_url';
$handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
$handler->display->display_options['fields']['field_url']['field'] = 'field_url';
$handler->display->display_options['fields']['field_url']['label'] = '';
$handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
/* Field: Content: Published Title */
$handler->display->display_options['fields']['field_published_title']['id'] = 'field_published_title';
$handler->display->display_options['fields']['field_published_title']['table'] = 'field_data_field_published_title';
$handler->display->display_options['fields']['field_published_title']['field'] = 'field_published_title';
$handler->display->display_options['fields']['field_published_title']['label'] = '';
$handler->display->display_options['fields']['field_published_title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_published_title']['alter']['path'] = '[field_url]';
$handler->display->display_options['fields']['field_published_title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_published_title']['element_default_classes'] = FALSE;
/* Field: Content: Published Description */
$handler->display->display_options['fields']['field_publishbody']['id'] = 'field_publishbody';
$handler->display->display_options['fields']['field_publishbody']['table'] = 'field_data_field_publishbody';
$handler->display->display_options['fields']['field_publishbody']['field'] = 'field_publishbody';
$handler->display->display_options['fields']['field_publishbody']['label'] = '';
$handler->display->display_options['fields']['field_publishbody']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_publishbody']['element_default_classes'] = FALSE;
/* Field: Content: County */
$handler->display->display_options['fields']['field_county']['id'] = 'field_county';
$handler->display->display_options['fields']['field_county']['table'] = 'field_data_field_county';
$handler->display->display_options['fields']['field_county']['field'] = 'field_county';
$handler->display->display_options['fields']['field_county']['label'] = 'Counties';
$handler->display->display_options['fields']['field_county']['delta_offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Region (field_region) */
$handler->display->display_options['arguments']['field_region_value']['id'] = 'field_region_value';
$handler->display->display_options['arguments']['field_region_value']['table'] = 'field_data_field_region';
$handler->display->display_options['arguments']['field_region_value']['field'] = 'field_region_value';
$handler->display->display_options['arguments']['field_region_value']['relationship'] = 'term_node_tid';
$handler->display->display_options['arguments']['field_region_value']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_region_value']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_region_value']['title'] = 'News';
$handler->display->display_options['arguments']['field_region_value']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['field_region_value']['default_argument_options']['index'] = '1';
$handler->display->display_options['arguments']['field_region_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_region_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_region_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_region_value']['limit'] = '0';
$handler->display->display_options['block_description'] = 'Regional News';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'link',
  3 => 'text',
  4 => 'taxonomy',
);
